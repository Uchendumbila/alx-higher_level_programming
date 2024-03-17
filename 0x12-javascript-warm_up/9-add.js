#!/usr/bin/node

function add (x, y) {
  return (x + y);
}

if (process.argv.length < 4) {
  console.log('NaN');
} else {
  console.log(add(parseInt(process.argv[2]), parseInt(process.argv[3])));
}
