'use strict';

var List = require("bs-platform/lib/js/list.js");
var $$Array = require("bs-platform/lib/js/array.js");
var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");
var Bizcharts = require("bizcharts");
var Caml_format = require("bs-platform/lib/js/caml_format.js");

function fixed(fix, f) {
  return Caml_format.caml_float_of_string(f.toFixed(fix));
}

function makeInfo(city, month) {
  var f = Math.random() * 20.0 + 5.0;
  return {
          city: city,
          temperature: Caml_format.caml_float_of_string(f.toFixed(2)),
          month: month
        };
}

var monthes = {
  hd: "Jan",
  tl: {
    hd: "Feb",
    tl: {
      hd: "Mar",
      tl: {
        hd: "Apr",
        tl: {
          hd: "May",
          tl: {
            hd: "Jun",
            tl: {
              hd: "Jul",
              tl: {
                hd: "Aug",
                tl: {
                  hd: "Sep",
                  tl: {
                    hd: "Oct",
                    tl: {
                      hd: "Nov",
                      tl: {
                        hd: "Dec",
                        tl: /* [] */0
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
};

var cities = {
  hd: "东京",
  tl: {
    hd: "伦敦",
    tl: {
      hd: "上海",
      tl: /* [] */0
    }
  }
};

function applyTo(x, f) {
  return Curry._1(f, x);
}

function flat_map(list_func, list) {
  return List.flatten(List.map((function (x) {
                    return List.map((function (param) {
                                  return Curry._1(param, x);
                                }), list_func);
                  }), list));
}

var data = flat_map(List.map(makeInfo, cities), monthes);

function Line1(Props) {
  return React.createElement(Bizcharts.Chart, {
              data: $$Array.of_list(data),
              autoFit: true,
              height: 300.0,
              padding: [
                10,
                20,
                50,
                40
              ],
              children: null
            }, React.createElement(Bizcharts.Line, {
                  position: "month*temperature",
                  color: "city",
                  label: "temperature",
                  shape: "smooth"
                }), React.createElement(Bizcharts.Point, {
                  position: "month*temperature",
                  color: "city"
                }));
}

var $less$$great = List.map;

var make = Line1;

exports.fixed = fixed;
exports.makeInfo = makeInfo;
exports.monthes = monthes;
exports.cities = cities;
exports.applyTo = applyTo;
exports.$less$$great = $less$$great;
exports.flat_map = flat_map;
exports.data = data;
exports.make = make;
/* data Not a pure module */
