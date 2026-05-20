// File Name: form-validation.js

function validateForm() {

	let name = document.getElementById("name").value;

	let dob = document.getElementById("dob").value;

	let email = document.getElementById("email").value;

	let mobile = document.getElementById("mobile").value;

	let password = document.getElementById("password").value;

	if (name == "") {
		alert("Enter Name");
		return false;
	}

	if (dob == "") {
		alert("Select DOB");
		return false;
	}

	if (email == "" || !email.includes("@")) {
		alert("Enter Valid Email");
		return false;
	}

	if (mobile.length != 10) {
		alert("Enter 10 Digit Mobile Number");
		return false;
	}

	if (password.length < 6) {
		alert("Password Must Be At Least 6 Characters");
		return false;
	}

	return true;
}