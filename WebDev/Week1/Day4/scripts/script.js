var count = 0;

function button_one() {
    if(count == 0){
        var one = document.getElementById("text_one");
        one.style.visibility = "visible";
        document.getElementById("text_two").style.visibility = "hidden";
        one.innerHTML = "I'm right";
        count +=1;
    }
    else{
        var one = document.getElementById("text_one");
        one.style.visibility = "visible";
        document.getElementById("text_two").style.visibility = "hidden";
        one.innerHTML = "No, I'm right!";
        count -=1;
    }
}

function button_two() {
    if(count == 0){
        var two = document.getElementById("text_two");
        two.style.visibility = "visible";
        document.getElementById("text_one").style.visibility = "hidden";
        two.innerHTML = "I'm right";
        count +=1;
    }
    else{
        var two = document.getElementById("text_two");
        two.style.visibility = "visible";
        document.getElementById("text_one").style.visibility = "hidden";
        two.innerHTML = "No, I'm right!";
        count -=1;
    }
}

function sphere(){
	var sphere_radius = document.getElementById("radius_input").value;
    let vol = 4 * Math.PI * sphere_radius * sphere_radius * sphere_radius / 3;
	document.getElementById("volume_result").innerHTML = vol.toFixed(2);
}