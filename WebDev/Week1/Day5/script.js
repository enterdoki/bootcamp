let addRow = () => {
    let tempTr = document.createElement('tr');
    let listOfTr = document.getElementsByTagName('tr');
    let amountOfTr = listOfTr.length;
    if (amountOfTr === 0){
        amountOfTr = 1;
    }else{
        amountOfTr = listOfTr[0].getElementsByTagName('td').length;
    }
    for (let i = 0; i < amountOfTr; i++){
        let tempTd = document.createElement('td');
        tempTd.setAttribute("id", "cell");
        tempTd.width = "50px";
        tempTd.height = "50px";
        tempTd.addEventListener("mouseover", function() {
            if(this.style.backgroundColor != "whitesmoke") {
                this.style.backgroundColor = "whitesmoke";
            }
            else {
                this.style.backgroundColor = document.getElementById('colordrop').value;
            }
        });
        tempTr.append(tempTd);   
    }
    document.getElementById('main').append(tempTr);
  
}

let removeRow = () => {
    let listOfTr = document.getElementById('main').lastChild.remove();
}

let addColumn = () =>{
    let listOfTr = document.getElementsByTagName('tr');
    if (listOfTr.length === 0){
        addRow();
    }else{
        for ( let i = 0; i < listOfTr.length; i++){
            let tempTd = document.createElement('td');
            tempTd.setAttribute("id", "cell");
            tempTd.width = "50px";
            tempTd.height = "50px";
            tempTd.addEventListener("mouseover", function() {
                if(this.style.backgroundColor != "whitesmoke") {
                    this.style.backgroundColor = "whitesmoke";
                }
                else {
                    this.style.backgroundColor = document.getElementById('colordrop').value;
                }
            });
            listOfTr[i].append(tempTd);
        }
    }

}

let removeColumn = () => {
    let listOfTr = document.getElementsByTagName('tr');
    for ( let i = 0; i < listOfTr.length; i++){
        listOfTr[i].lastChild.remove();
    }
}
let fillAll = (color) => {
    let listOfTr = document.getElementsByTagName('td');
    for ( let i = 0; i < listOfTr.length; i++){
        listOfTr[i].style.backgroundColor = color;
    }
}

let fillUnColored = () => {
    let listOfTr = document.getElementsByTagName('td');
    for ( let i = 0; i < listOfTr.length; i++){
        if (listOfTr[i].style.backgroundColor == 'whitesmoke'){
            listOfTr[i].style.backgroundColor = document.getElementById('colordrop').value;
            //console.log(listOfTr[i].style.backgroundColor);
        }
    }
}