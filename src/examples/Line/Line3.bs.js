'use strict';

var $$Array = require("bs-platform/lib/js/array.js");
var React = require("react");
var Bizcharts = require("bizcharts");
var Lib$ReasonReactBizcharts = require("../../lib/Lib.bs.js");

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

var values = {
  hd: 51,
  tl: {
    hd: 91,
    tl: {
      hd: 34,
      tl: {
        hd: 47,
        tl: {
          hd: 63,
          tl: {
            hd: 58,
            tl: {
              hd: 56,
              tl: {
                hd: 77,
                tl: {
                  hd: 99,
                  tl: {
                    hd: 106,
                    tl: {
                      hd: 88,
                      tl: {
                        hd: 56,
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

var data = $$Array.of_list(Lib$ReasonReactBizcharts.zip_with((function (month, value) {
            return {
                    month: month,
                    value: value
                  };
          }), monthes, values));

function Line3(Props) {
  return React.createElement(Bizcharts.Chart, {
              data: data,
              autoFit: true,
              width: 500.0,
              height: 300.0,
              padding: [
                10.0,
                20.0,
                50.0,
                40.0
              ],
              scale: {value: {min: 0}},
              children: React.createElement(Bizcharts.Line, {
                    position: "month*value",
                    shape: "hv"
                  })
            });
}

var make = Line3;

exports.monthes = monthes;
exports.values = values;
exports.data = data;
exports.make = make;
/* data Not a pure module */
