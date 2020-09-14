'use strict';

var React = require("react");
var Bizcharts = require("bizcharts");
var Interaction$ReasonReactBizcharts = require("./base/Interaction.bs.js");

var data = [
  {
    name: "London",
    month: "Jan.",
    avgRainfall: 18.9
  },
  {
    name: "London",
    month: "Feb.",
    avgRainfall: 28.8
  },
  {
    name: "London",
    month: "Mar.",
    avgRainfall: 39.3
  },
  {
    name: "London",
    month: "Apr.",
    avgRainfall: 20.4
  },
  {
    name: "London",
    month: "May",
    avgRainfall: 47.0
  },
  {
    name: "London",
    month: "Jun.",
    avgRainfall: 20.3
  },
  {
    name: "London",
    month: "Jul.",
    avgRainfall: 24.0
  },
  {
    name: "London",
    month: "Aug.",
    avgRainfall: 0.0
  },
  {
    name: "Paris",
    month: "Jan.",
    avgRainfall: 19.9
  },
  {
    name: "Paris",
    month: "Feb.",
    avgRainfall: 28.8
  },
  {
    name: "Paris",
    month: "Mar.",
    avgRainfall: 29.3
  },
  {
    name: "Paris",
    month: "Apr.",
    avgRainfall: 0.0
  },
  {
    name: "Paris",
    month: "May",
    avgRainfall: 67.0
  },
  {
    name: "Paris",
    month: "Jun.",
    avgRainfall: 0.0
  },
  {
    name: "Paris",
    month: "Jul.",
    avgRainfall: 23.0
  },
  {
    name: "Paris",
    month: "Aug.",
    avgRainfall: 0.0
  },
  {
    name: "Berlin",
    month: "Jan.",
    avgRainfall: 12.4
  },
  {
    name: "Berlin",
    month: "Feb.",
    avgRainfall: 23.2
  },
  {
    name: "Berlin",
    month: "Mar.",
    avgRainfall: 34.5
  },
  {
    name: "Berlin",
    month: "Apr.",
    avgRainfall: 0.0
  },
  {
    name: "Berlin",
    month: "May",
    avgRainfall: 52.6
  },
  {
    name: "Berlin",
    month: "Jun.",
    avgRainfall: 35.5
  },
  {
    name: "Berlin",
    month: "Jul.",
    avgRainfall: 37.4
  },
  {
    name: "Berlin",
    month: "Aug.",
    avgRainfall: 42.4
  }
];

var data2 = [
  { name: 'London', month: 'Jan.', avgRainfall: 18.9 },
  { name: 'London', month: 'Feb.', avgRainfall: 28.8 },
  { name: 'London', month: 'Mar.', avgRainfall: 39.3 },
  { name: 'London', month: 'Apr.', avgRainfall: 20.4 },
  { name: 'London', month: 'May', avgRainfall: 47 },
  { name: 'London', month: 'Jun.', avgRainfall: 20.3 },
  { name: 'London', month: 'Jul.', avgRainfall: 24 },
  { name: 'London', month: 'Aug.', avgRainfall: null },
	{ name: 'Paris', month: 'Jan.', avgRainfall: 19.9 },
  { name: 'Paris', month: 'Feb.', avgRainfall: 28.8 },
  { name: 'Paris', month: 'Mar.', avgRainfall: 29.3 },
  { name: 'Paris', month: 'Apr.', avgRainfall: null },
  { name: 'Paris', month: 'May', avgRainfall: 67 },
  { name: 'Paris', month: 'Jun.', avgRainfall: null },
  { name: 'Paris', month: 'Jul.', avgRainfall: 23 },
  { name: 'Paris', month: 'Aug.', avgRainfall: null },
  { name: 'Berlin', month: 'Jan.', avgRainfall: 12.4 },
  { name: 'Berlin', month: 'Feb.', avgRainfall: 23.2 },
  { name: 'Berlin', month: 'Mar.', avgRainfall: 34.5 },
  { name: 'Berlin', month: 'Apr.', avgRainfall: null },
  { name: 'Berlin', month: 'May', avgRainfall: 52.6 },
  { name: 'Berlin', month: 'Jun.', avgRainfall: 35.5 },
  { name: 'Berlin', month: 'Jul.', avgRainfall: 37.4 },
  { name: 'Berlin', month: 'Aug.', avgRainfall: 42.4 },
];

function App(Props) {
  var adjust = [{
      type: 'dodge',
      marginRatio: 0
    }];
  return React.createElement(Bizcharts.Chart, {
              data: data2,
              autoFit: true,
              width: 300.0,
              height: 400.0,
              padding: "auto",
              children: null
            }, React.createElement(Bizcharts.Interval, {
                  position: "month*avgRainfall",
                  color: "name",
                  adjust: adjust
                }), React.createElement(Bizcharts.Tooltip, {
                  shared: true
                }), React.createElement(Interaction$ReasonReactBizcharts.make, {
                  type_: "active-region"
                }));
}

var make = App;

exports.data = data;
exports.data2 = data2;
exports.make = make;
/* react Not a pure module */
