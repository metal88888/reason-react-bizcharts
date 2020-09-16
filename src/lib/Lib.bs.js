'use strict';

var List = require("bs-platform/lib/js/list.js");
var Curry = require("bs-platform/lib/js/curry.js");

function range(from_, to_) {
  return List.init(to_ - from_ | 0, (function (i) {
                return i + from_ | 0;
              }));
}

function zip_with(func, list_a, list_b) {
  if (list_a && list_b) {
    return {
            hd: Curry._2(func, list_a.hd, list_b.hd),
            tl: zip_with(func, list_a.tl, list_b.tl)
          };
  } else {
    return /* [] */0;
  }
}

function zip(list_a, list_b) {
  return zip_with((function (a, b) {
                return [
                        a,
                        b
                      ];
              }), list_a, list_b);
}

var $less$$great = List.map;

exports.range = range;
exports.zip_with = zip_with;
exports.zip = zip;
exports.$less$$great = $less$$great;
/* No side effect */
