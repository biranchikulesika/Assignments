<!DOCTYPE html>
<html>

<head>

    <title>Registration Output</title>

    <link rel="stylesheet" href="a5f2_style.css">

</head>

<body>

<div class="container">

    <h2>Submitted Data</h2>

    <?php

    if($_SERVER["REQUEST_METHOD"] == "POST"){

        $languages = isset($_POST['languages'])

        ? implode(", ", $_POST['languages'])

        : "None";

        echo "<p><b>Name :</b> ".$_POST['name']."</p>";

        echo "<p><b>DOB :</b> ".$_POST['dob']."</p>";

        echo "<p><b>Email :</b> ".$_POST['email']."</p>";

        echo "<p><b>Mobile :</b> ".$_POST['mobile']."</p>";

        echo "<p><b>Address :</b> ".$_POST['address']."</p>";

        echo "<p><b>Gender :</b> ".$_POST['gender']."</p>";

        echo "<p><b>Country :</b> ".$_POST['country']."</p>";

        echo "<p><b>Languages :</b> ".$languages."</p>";
    }

    ?>

</div>

</body>

</html>