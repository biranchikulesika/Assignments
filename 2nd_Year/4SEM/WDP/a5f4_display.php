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
        if ($_SERVER["REQUEST_METHOD"] == "POST") {
            $name = $_POST['name'];
            $dob = $_POST['dob'];
            $email = $_POST['email'];
            $mobile = $_POST['mobile'];
            $address = $_POST['address'];
            $password = $_POST['password'];
            $gender = $_POST['gender'];
            $country = $_POST['country'];
            
            if (isset($_POST['languages'])) {
                $languages = implode(", ", $_POST['languages']);
            } else {
                $languages = "None";
            }

            echo "<p><strong>Name:</strong> " . $name . "</p>";
            echo "<p><strong>DOB:</strong> " . $dob . "</p>";
            echo "<p><strong>Gender:</strong> " . $gender . "</p>";
            echo "<p><strong>Country:</strong> " . $country . "</p>";
            echo "<p><strong>Languages:</strong> " . $languages . "</p>";
            echo "<p><strong>Email:</strong> " . $email . "</p>";
            echo "<p><strong>Mobile:</strong> " . $mobile . "</p>";
            echo "<p><strong>Address:</strong> " . $address . "</p>";
            echo "<p><strong>Password:</strong> " . $password . "</p>";
        }
        ?>
    </div>
</body>
</html>