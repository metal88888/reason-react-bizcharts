'use strict';

var React = require("react");
var Bizcharts = require("bizcharts");

function Test(Props) {
  var style = {
    height: "20.0px"
  };
  return React.createElement("div", {
              style: style
            }, React.createElement(Bizcharts.Chart, {
                  data: [],
                  style: style
                }));
}

var make = Test;

exports.make = make;
/* react Not a pure module */
