function validateForm(){

    let name = document.getElementById("name").value;

    let dob = document.getElementById("dob").value;

    let email = document.getElementById("email").value;

    let mobile = document.getElementById("mobile").value;

    let password = document.getElementById("password").value;

    if(name == ""){

        alert("Enter Name");

        return false;
    }

    if(dob == ""){

        alert("Select DOB");

        return false;
    }

    if(email.indexOf("@") == -1){

        alert("Invalid Email");

        return false;
    }

    if(mobile.length != 10 || isNaN(mobile)){

        alert("Enter Valid Mobile Number");

        return false;
    }

    if(password.length < 6){

        alert("Password Must Be 6 Characters");

        return false;
    }

    return true;
}