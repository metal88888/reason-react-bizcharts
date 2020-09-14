'use strict';

var React = require("react");

function Test(Props) {
  return React.createElement("div", undefined);
}

var make = Test;

exports.make = make;
/* react Not a pure module */
