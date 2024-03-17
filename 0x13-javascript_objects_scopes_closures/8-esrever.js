#!/usr/bin/node

exports.esrever = function (list) {
  const revList = [];

  for (let w = list.length - 1; w >= 0; --w) {
    revList.push(list[w]);
  }

  return revList;
};
