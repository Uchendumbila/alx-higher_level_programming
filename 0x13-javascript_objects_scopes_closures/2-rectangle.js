#!/usr/bin/node

// Checks for Rectangle parameters

module.exports = class Rectangle {
  constructor (height, width) {
    if (typeof height === 'number' && typeof width === 'number' && height > 0 && width > 0) {
      this.height = height;
      this.width = width;
    }
  }
};
