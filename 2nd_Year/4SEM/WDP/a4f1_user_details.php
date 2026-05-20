<!-- File Name: index.php -->

<!DOCTYPE html>
<html>

<head>

    <title>User Details</title>

    <link rel="stylesheet" href="/a4f2_user_details.css">

</head>

<body>

    <div class="container">

        <div class="box">

            <h1>User Details</h1>

            <form method="POST">

                <label>Enter Name</label>
                <input type="text" name="name" required>

                <label>Enter Date of Birth</label>
                <input type="date" name="dob" required>

                <input type="submit" value="Submit" id="btn">

            </form>

            <?php

            if($_POST){

                $name = $_POST['name'];

                $dob = $_POST['dob'];

                date_default_timezone_set("Asia/Kolkata");

                $currentTime = date("h:i:s A");

                $today = new DateTime();

                $birth = new DateTime($dob);

                $age = $today->diff($birth);

                $words = str_word_count($name);

                $reverse = strrev($name);

                echo "<div class='output'>";

                echo "<h3>Result</h3>";

                echo "<p><b>Name :</b> $name</p>";

                echo "<p><b>Total Words :</b> $words</p>";

                echo "<p><b>Reverse Name :</b> $reverse</p>";

                echo "<p><b>Current Time :</b> $currentTime</p>";

                echo "<p><b>Age :</b> $age->y Years</p>";

                echo "</div>";
            }

            ?>

        </div>

    </div>

</body>

</html>