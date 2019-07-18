const arr = [1,2,3,4,5];

function isEven(num) {      // test functions
    return num %2 === 0;
}

function multiplyByTwo(num) {   // test functions
    return num * 2;
}

function myEach(arr, cb) {
    for(let i = 0; i < arr.length; i++ ) {
        let element = arr[i];
        cb(element);
    }
}

Array.prototype.myEach = function(cb) {
    for(let i = 0; i < this.length; i++ ) {
        let element = this[i];
        cb(element);
    }
}

function myMap(arr, cb) {
    let new_map = [];
    for(let i = 0; i < arr.length; i++ ) {
          let element = arr[i];
          new_map[i] = cb(element);
    }
  
    return new_map;
}

function myFilter(arr, cb) {
    let filtered = [];
    for(let i = 0; i < arr.length; i++ ) {
        let element = arr[i];
        if(cb(element))
        filtered.push(element);
    }

return filtered;
}
  
Array.prototype.myFilter = function(cb) {
    let filtered = [];
    for(let i = 0; i < this.length; i++) {
        let element = this[i];
        if(cb(element))
        filtered.push(element);
    }

return filtered;
}

function mySome(arr, cb) {
    for(let i = 0; i < arr.length; i++ ) {
      let element = arr[i];
      if(cb(element))
        return true;
    }
    return false;
  }
  
Array.prototype.mySome = function(cb) {
    for(let i = 0; i < this.length; i++) {
        let element = this[i];
        if(cb(element))
        return true;
    }

return false;
}

Array.prototype.mySome = function(cb) {
    for(let i = 0; i < this.length; i++) {
      let element = this[i];
      if(cb(element))
        return true;
    }
  
    return false;
  }
  
function myEvery(arr, cb) {
    let count = 0;
    if(arr.length === 0) 
        return true;

    for(let i = 0; i < arr.length; i++ ) {
        let element = arr[i];
        if(cb(element)) {
        count++;
        }

        if(count === arr.length)
        return true;

    }

    return false;
}
  
Array.prototype.myEvery = function(cb) {
    let count = 0;
    if(arr.length === 0) 
        return true;

    for(let i = 0; i < this[i]; i++ ) {
        let element = this[i];
        if(cb(element)) {
        count++;
        }

        if(count === arr.length)
        return true;

    }

    return false;
}

function myReduce(arr, cb, initial) {
    let result = 0;
    if(initial)
      arr.unshift(initial);
    for(let i = 0; i < arr.length; i++ ) {
      let element = arr[i];
      result += cb(element);
    }
    return result;
  }
  
Array.prototype.myReduce = function(cb, initial) {
    let result = 0;
    if(initial)
        this.unshift(initial);
    for(let i = 0; i < arr.length; i++ ) {
        let element = this[i];
        result += cb(element);
    }
    return result;
}

function myIncludes(arr, target) {
    for(let i = 0; i < arr.length; i++ ) {
      let element = arr[i];
      if(element === target)
        return true;
    }
    return false;
  }
  
Array.prototype.myIncludes = function(target) {
    for(let i = 0; i < this.length; i++) {
        let element = this[i];
        if(element === target)
        return true;
    }

    return false;
}

function myIndexOf(arr, term) {
    for(let i = 0; i < arr.length; i++ ) {
      let element = arr[i];
      if(element === term)
        return i;
    }
    return -1;
  }
  
Array.prototype.myIndexOf = function(term) {
    for(let i = 0; i < this.length; i++) {
        let element = this[i];
        if(element === term)
        return i;
    }

    return -1;
}

function myPush(arr, new_term) {
    let size = arr.length;
    arr[size] = new_term;
    return arr.length;
}
  
Array.prototype.myPush = function(new_term) {
    let size = arr.length;
    arr[size] = new_term;
    return arr.length;
}

function myUnshift(arr, target) {
    for(let i = arr.length-1; i >= 0; i--) {
      let element = arr[i];
      if(element === target) 
        return i;
    }
    return -1;
}
  
Array.prototype.myUnshift = function(target) {
    for(let i = this.length-1; i >= 0; i--) {
      let element = this[i];
      if(element === target) 
        return i;
    }
    return -1;
}

function grabKeys(arr) {
    let keys = [];
  
      for(let i in arr) {
        if(i.hasOwnProperty(key))
          keys.push(i);
      }
    return keys;
}
    
  Object.grabKeys = function(arr) {
      let keys = [];
  
      for(let i in arr) {
        if(i.hasOwnProperty(key))
          keys.push(i);
      }
    return keys;
  }

  function grabValues(arr) {
    let values = [];
  
      for(let i in arr) {
        if(i.hasOwnProperty(value))
          values.push(i);
      }
    return keys;
}
    
Object.grabValues = function(arr) {
    let values = [];

    for(let i in arr) {
    if(i.hasOwnProperty(value))
        values.push(i);
    }
return values;
}