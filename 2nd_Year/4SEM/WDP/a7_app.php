<?php
$conn = new mysqli("localhost", "root", "root", "empdb");
if (isset($_GET['chk'])) die($conn->query("SELECT id FROM employee WHERE id=".(int)$_GET['chk'])->num_rows?"1":"0");
if (isset($_GET['del'])) $conn->query("DELETE FROM employee WHERE id=" . (int)$_GET['del']);
if (isset($_POST['add'])) $conn->query("INSERT INTO employee VALUES(" . (int)$_POST['id'] . ",'" . $_POST['name'] . "','" . $_POST['dept'] . "'," . (int)$_POST['salary'] . ")");
if (isset($_POST['save'])) $conn->query("UPDATE employee SET name='" . $_POST['name'] . "', dept='" . $_POST['dept'] . "', salary=" . (int)$_POST['salary'] . " WHERE id=" . (int)$_POST['id']);
$q = $_GET['q'] ?? '';
$res = $conn->query("SELECT * FROM employee" . ($q ? " WHERE id LIKE '%$q%' OR name LIKE '%$q%' OR dept LIKE '%$q%' OR salary LIKE '%$q%'" : "") . " ORDER BY id");
$edit = $_GET['edit'] ?? '';
?>
<!DOCTYPE html>
<html>
<head>
    <title>Employee Sheet</title>
    <style>
        body{font-family:Arial;padding:40px;margin:0}
        .container{width:900px;margin:auto;padding:20px;box-sizing:border-box}
        .header{display:flex;justify-content:space-between;align-items:center;margin-bottom:15px}
        h1{margin:0}
        form, .topbar{display:flex;gap:8px;margin:0}
        input,button,a{padding:4px 8px;border:1px solid #ccc;font-size:14px;box-sizing:border-box}
        input{width:100%}
        button,a{background:#f3f3f3;text-decoration:none;color:#111;cursor:pointer;display:inline-block}
        table{width:100%;border-collapse:collapse;font-size:14px}
        th,td{border:1px solid #ccc;padding:4px 8px;text-align:left}
        td:last-child button,td:last-child a{width:75px;text-align:center}
        td:last-child{white-space:nowrap}
    </style>
</head>
<body>
<div class="container">
    <div class="header">
        <h1>Employee Sheet</h1>
        <div class="topbar">
            <form method="get">
                <input type="text" name="q" value="<?=$q?>" placeholder="Search">
                <button>Search</button>
                <?php if($q) echo '<a href="a7_app.php">Clear</a>'; ?>
            </form>
        </div>
    </div>
    <form method="post" style="display:block">
    <table>
        <tr><th style="width:12%">ID</th><th style="width:30%">Name</th><th style="width:28%">Dept</th><th style="width:15%">Salary</th><th style="width:15%">Actions</th></tr>
        <?php if(!$q){ ?>
        <tr>
            <td>
                <input type="number" name="id" required onblur="fetch('?chk='+this.value).then(r=>r.text()).then(t=>{let w=document.getElementById('w');if(!w){w=document.createElement('div');w.id='w';w.style='color:red;font-size:12px;margin-top:4px';this.parentNode.appendChild(w);}w.innerHTML=t==='1'?'ID Exists!':'';document.querySelector('[name=add]').disabled=(t==='1');})">
            </td>
            <td><input type="text" name="name" required></td>
            <td><input type="text" name="dept" required></td>
            <td><input type="number" name="salary" required></td>
            <td><button name="add">Save</button> <button type="reset" onclick="document.getElementById('w')?.remove();document.querySelector('[name=add]').disabled=false">Clear</button></td>
        </tr>
        <?php } while($r = $res->fetch_assoc()){ 
            $url = "a7_app.php" . ($q ? "?q=".urlencode($q) : "");
            $sep = $q ? "&" : "?";
        ?>
            <?php if ($edit == $r['id']) { ?>
                <tr>
                    <td><input type="number" name="id" value="<?=$r['id']?>" readonly></td>
                    <td><input type="text" name="name" value="<?=$r['name']?>"></td>
                    <td><input type="text" name="dept" value="<?=$r['dept']?>"></td>
                    <td><input type="number" name="salary" value="<?=$r['salary']?>"></td>
                    <td><button name="save">Update</button> <a href="<?=$url?>">Cancel</a></td>
                </tr>
            <?php } else { ?>
                <tr>
                    <td><?=$r['id']?></td>
                    <td><?=$r['name']?></td>
                    <td><?=$r['dept']?></td>
                    <td><?=$r['salary']?></td>
                    <td><a href="<?=$url.$sep?>edit=<?=$r['id']?>">Update</a> <a href="<?=$url.$sep?>del=<?=$r['id']?>">Delete</a></td>
                </tr>
            <?php } ?>
        <?php } ?>
    </table>
    </form>
</div>
</body>
</html>