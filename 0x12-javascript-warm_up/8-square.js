#!/usr/bin/node

let size = parseInt(process.argv[2]);
if (isNaN(size) || process.argv[2] === undefined) {
  console.log('Missing size');
}
let pstr = 'X';
for (let w = 0; w < size - 1; w++) {
  pstr += 'X';
}
while (size > 0) {
  console.log(pstr);
  size--;
}
