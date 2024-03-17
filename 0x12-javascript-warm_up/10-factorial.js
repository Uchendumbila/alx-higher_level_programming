#!/usr/bin/node

function factorial (x) {
  if (x <= 0) {
    return 0;
  } else if (x === 1) {
    return 1;
  } else {
    return (x * factorial(x - 1));
  }
}

const myInt = parseInt(process.argv[2]);
if (isNaN(myInt)) {
  console.log('1');
} else {
  console.log(factorial(myInt));
}
