#!/usr/bin/node

if (process.argv.length < 4) {
  console.log('0');
} else {
  const size = process.argv.length;
  const ints = [];
  for (let w = 2; w < size; w++) {
    ints[w - 2] = parseInt(process.argv[w]);
  }
  ints.sort(function (x, y) { return y - x; });
  console.log(ints[1]);
}
