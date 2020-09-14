'use strict';

var React = require("react");
var ReactDOMRe = require("reason-react/src/legacy/ReactDOMRe.bs.js");
var App$ReasonReactBizcharts = require("./App.bs.js");

ReactDOMRe.renderToElementWithId(React.createElement(App$ReasonReactBizcharts.make, {}), "app");

/*  Not a pure module */
