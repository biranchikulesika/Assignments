<?php

$conn = new mysqli("localhost", "root", "", "empdb");

if ($conn->connect_error) {

	die("Connection Failed");
}

$id = $_POST['id'];

$name = $_POST['name'];

$dept = $_POST['dept'];

$salary = $_POST['salary'];

if (isset($_POST['add'])) {

	$sql = "INSERT INTO employee VALUES('$id','$name','$dept','$salary')";

	$conn->query($sql);

	echo "Employee Added";
}

if (isset($_POST['search'])) {

	$res = $conn->query("SELECT * FROM employee WHERE id='$id'");

	while ($row = $res->fetch_assoc()) {

		echo "<h3>Employee Found</h3>";

		echo "ID : " . $row['id'] . "<br>";

		echo "Name : " . $row['name'] . "<br>";

		echo "Department : " . $row['dept'] . "<br>";

		echo "Salary : " . $row['salary'] . "<br>";
	}
}

if (isset($_POST['update'])) {

	$sql = "UPDATE employee SET salary='$salary' WHERE id='$id'";

	$conn->query($sql);

	echo "Salary Updated";
}

if (isset($_POST['delete'])) {

	$sql = "DELETE FROM employee WHERE id='$id'";

	$conn->query($sql);

	echo "Employee Deleted";
}

if (isset($_POST['display'])) {

	$res = $conn->query("SELECT * FROM employee");

	echo "<table>";

	echo "<tr>

            <th>ID</th>
            <th>Name</th>
            <th>Dept</th>
            <th>Salary</th>

          </tr>";

	while ($row = $res->fetch_assoc()) {

		echo "<tr>";

		echo "<td>" . $row['id'] . "</td>";

		echo "<td>" . $row['name'] . "</td>";

		echo "<td>" . $row['dept'] . "</td>";

		echo "<td>" . $row['salary'] . "</td>";

		echo "</tr>";
	}

	echo "</table>";
}
