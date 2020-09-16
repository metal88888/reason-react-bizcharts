'use strict';

var $$Array = require("bs-platform/lib/js/array.js");
var React = require("react");
var Bizcharts = require("bizcharts");
var Lib$ReasonReactBizcharts = require("../../lib/Lib.bs.js");

var years = Lib$ReasonReactBizcharts.$less$$great((function (prim) {
        return String(prim);
      }), Lib$ReasonReactBizcharts.range(1991, 2000));

var values = {
  hd: 3.0,
  tl: {
    hd: 4.0,
    tl: {
      hd: 3.5,
      tl: {
        hd: 5.0,
        tl: {
          hd: 4.9,
          tl: {
            hd: 6.0,
            tl: {
              hd: 9.0,
              tl: {
                hd: 11.0,
                tl: /* [] */0
              }
            }
          }
        }
      }
    }
  }
};

var data = $$Array.of_list(Lib$ReasonReactBizcharts.zip_with((function (year, value) {
            return {
                    year: year,
                    value: value
                  };
          }), years, values));

function Line2(Props) {
  return React.createElement(Bizcharts.Chart, {
              data: data,
              autoFit: true,
              width: 500.0,
              height: 300.0,
              padding: [
                10,
                20,
                50,
                40
              ],
              scale: {
      value: {
        min: 0,
      },
    },
              children: null
            }, React.createElement(Bizcharts.Line, {
                  position: "year*value"
                }), React.createElement(Bizcharts.Point, {
                  position: "year*value"
                }), React.createElement(Bizcharts.Tooltip, {
                  showCrosshairs: true
                }));
}

var make = Line2;

exports.years = years;
exports.values = values;
exports.data = data;
exports.make = make;
/* years Not a pure module */
