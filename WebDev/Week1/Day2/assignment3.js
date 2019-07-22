// 1) Select the section with an id of container without using querySelector.
document.getElementById("container");

// 2) Select the section with an id of container using querySelector.
document.querySelector("#container");

//3) Select all of the list items with a class of "second".
document.getElementsByClassName("second");

// 4) Select a list item with a class of third, but only the list item inside of the ol tag.
document.getElementsByTagName("ol").getElementsByClassName("third");

// 5) Give the section with an id of container the text "Hello!".
document.getElementById("container").value = "Hello";

// 6) Add the class main to the div with a class of footer.
document.getElementById("footer").className += "main";

// 7) Remove the class main on the div with a class of footer.
document.getElementById("footer").remove("main");

// 8) Create a new li element.
const li = document.createElement("li");

// 9) Give the li the text "four".
const text = document.createTextNode("four");
li.appendChild(text);

// 10) Append the li to the ul element.
const ul = document.getElementsByTagName("ul");
ul.appendChild(li);

// 12) Loop over all of the lis inside the ol tag and give them a background color of "green".
const ol = document.getElementsByTagName("ol");
const list = ol.getElementsByTagName("li");
for(let i = 0; i < list.length; i++) {
    list[i].style.backgroundColor = "green";
}

// 13) Remove the div with a class of footer.
document.getElementsByClassName("footer").remove();

