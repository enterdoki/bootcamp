function passwordCheck(event){
	event.preventDefault();
	var password = document.myForm.Password.value;
	if(password != "12345678")
	{
		alert("INCORRECT PASSWORD");
		return false;
	}
	else
	{
		document.getElementById("message").innerHTML = "Welcome back!"
	}

}
