'use strict';

var React = require("react");
var Bizcharts = require("bizcharts");
var Interaction$ReasonReactBizcharts = require("../../base/Interaction.bs.js");

var data = [
  {
    x: "Oceania",
    low: 1,
    q1: 9,
    median: 16,
    q3: 22,
    high: 24,
    range: []
  },
  {
    x: "East Europe",
    low: 1,
    q1: 5,
    median: 8,
    q3: 12,
    high: 16,
    range: []
  },
  {
    x: "Australia",
    low: 1,
    q1: 8,
    median: 12,
    q3: 19,
    high: 26,
    range: []
  },
  {
    x: "South America",
    low: 2,
    q1: 8,
    median: 12,
    q3: 21,
    high: 28,
    range: []
  },
  {
    x: "North Africa",
    low: 1,
    q1: 8,
    median: 14,
    q3: 18,
    high: 24,
    range: []
  },
  {
    x: "North America",
    low: 3,
    q1: 10,
    median: 17,
    q3: 28,
    high: 30,
    range: []
  },
  {
    x: "West Europe",
    low: 1,
    q1: 7,
    median: 10,
    q3: 17,
    high: 22,
    range: []
  },
  {
    x: "West Africa",
    low: 1,
    q1: 6,
    median: 8,
    q3: 13,
    high: 16,
    range: []
  }
];

for(var i = 0 ,i_finish = data.length; i < i_finish; ++i){
  console.log(i);
  var item = data[i];
  console.log(item);
  item.range = [
    item.low,
    item.q1,
    item.median,
    item.q3,
    item.high
  ];
}

console.log(data);

function Schema1(Props) {
  return React.createElement(Bizcharts.Chart, {
              data: data,
              autoFit: true,
              width: 500.0,
              height: 300.0,
              scale: {
                range: {
                  max: 35,
                  nice: true
                }
              },
              children: null
            }, React.createElement(Bizcharts.Tooltip, {
                  showTitle: false,
                  showMarkers: false,
                  itemTpl: "\n    <li class=\"g2-tooltip-list-item\" data-index={index} style=\"margin-bottom:4px;\">\n      <span style=\"background-color:{color};\" class=\"g2-tooltip-marker\"></span>\n      {name}<br/>\n      <span style=\"padding-left: 16px\">最大值：{high}</span><br/>\n      <span style=\"padding-left: 16px\">上四分位数：{q3}</span><br/>\n      <span style=\"padding-left: 16px\">中位数：{median}</span><br/>\n      <span style=\"padding-left: 16px\">下四分位数：{q1}</span><br/>\n      <span style=\"padding-left: 16px\">最小值：{low}</span><br/>\n    </li>\n  "
                }), React.createElement(Bizcharts.Schema, {
                  position: "x*range",
                  shape: "box",
                  tooltip: ([
        "x*low*q1*median*q3*high",
        (x, low, q1, median, q3, high) => {
          return {
            name: x,
            low,
            q1,
            median,
            q3,
            high
          };
        }
        ]),
                  style: {
          stroke: "#545454",
          fill: "#1890FF",
          fillOpacity: 0.3
        }
                }), React.createElement(Interaction$ReasonReactBizcharts.make, {
                  type_: "active-region"
                }));
}

var make = Schema1;

exports.data = data;
exports.make = make;
/*  Not a pure module */
