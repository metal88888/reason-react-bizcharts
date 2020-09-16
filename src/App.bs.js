'use strict';

var React = require("react");
var Line1$ReasonReactBizcharts = require("./examples/Line/Line1.bs.js");
var Line2$ReasonReactBizcharts = require("./examples/Line/Line2.bs.js");
var Line3$ReasonReactBizcharts = require("./examples/Line/Line3.bs.js");
var Line4$ReasonReactBizcharts = require("./examples/Line/Line4.bs.js");
var Stack1$ReasonReactBizcharts = require("./examples/stack/Stack1.bs.js");
var Schema1$ReasonReactBizcharts = require("./examples/Schema/Schema1.bs.js");

function App(Props) {
  var style = {
    display: "flex",
    flexDirection: "column"
  };
  return React.createElement("div", {
              style: style
            }, React.createElement(Line1$ReasonReactBizcharts.make, {}), React.createElement(Line2$ReasonReactBizcharts.make, {}), React.createElement(Line3$ReasonReactBizcharts.make, {}), React.createElement(Line4$ReasonReactBizcharts.make, {}), React.createElement(Stack1$ReasonReactBizcharts.make, {}), React.createElement(Schema1$ReasonReactBizcharts.make, {}));
}

var make = App;

exports.make = make;
/* react Not a pure module */
