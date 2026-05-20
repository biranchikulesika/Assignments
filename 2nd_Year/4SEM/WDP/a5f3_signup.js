function validateForm() {
    var name = document.getElementById("name").value;
    var dob = document.getElementById("dob").value;
    var email = document.getElementById("email").value;
    var mobile = document.getElementById("mobile").value;
    var password = document.getElementById("password").value;

    if (name == "") {
        alert("Name cannot be empty");
        return false;
    }

    if (dob == "") {
        alert("DOB cannot be empty");
        return false;
    }

    if (email.indexOf("@") == -1 || email.indexOf(".") == -1) {
        alert("Invalid email");
        return false;
    }

    if (mobile.length != 10 || isNaN(mobile)) {
        alert("Mobile must be 10 digits");
        return false;
    }

    if (password.length < 6) {
        alert("Password must be at least 6 characters");
        return false;
    }

    return true;
}