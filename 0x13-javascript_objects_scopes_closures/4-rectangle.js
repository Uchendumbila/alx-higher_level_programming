#!/usr/bin/node

// - Rotate and Double the width and height of the Rectangle

module.exports = class Rectangle {
  constructor (width, height) {
    if (typeof width === 'number' && typeof height === 'number' && width > 0 && height > 0) {
      this.width = width;
      this.height = height;
    }
  }

  print (char = 'X') {
    for (let w = 0; w < this.height; ++w) {
      let k = 0;

      for (; k < this.width; ++k) {
        process.stdout.write(char);
      }

      if (k === this.width) {
        console.log('');
      }
    }
  }

  rotate () {
    [this.width, this.height] = [this.height, this.width];
  }

  double () {
    this.width *= 2;
    this.height *= 2;
  }
};
