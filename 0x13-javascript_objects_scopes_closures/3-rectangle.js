#!/usr/bin/node

// Prints a Rectangle with the parameters passed

module.exports = class Rectangle {
  constructor (width, height) {
    if (typeof width === 'number' && typeof height === 'number' && width > 0 && height > 0) {
      this.width = width;
      this.height = height;
    }
  }

  print () {
    for (let w = 0; w < this.height; ++w) {
      let k = 0;

      for (; k < this.width; ++k) {
        process.stdout.write('X');
      }

      if (k === this.width) {
        console.log('');
      }
    }
  }
};
