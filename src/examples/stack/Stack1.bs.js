'use strict';

var React = require("react");
var Bizcharts = require("bizcharts");
var Coordinate$ReasonReactBizcharts = require("../../base/Coordinate.bs.js");

var data = [
  {
    year: "2001",
    population: 41.8
  },
  {
    year: "2002",
    population: 38.0
  },
  {
    year: "2003",
    population: 33.7
  },
  {
    year: "2004",
    population: 30.7
  },
  {
    year: "2005",
    population: 25.8
  },
  {
    year: "2006",
    population: 31.7
  },
  {
    year: "2007",
    population: 33.0
  },
  {
    year: "2008",
    population: 46.0
  },
  {
    year: "2009",
    population: 38.3
  },
  {
    year: "2010",
    population: 28.0
  },
  {
    year: "2011",
    population: 42.5
  },
  {
    year: "2012",
    population: 30.3
  }
];

function Stack1(Props) {
  return React.createElement(Bizcharts.Chart, {
              data: data,
              autoFit: true,
              width: 500.0,
              height: 300.0,
              children: null
            }, React.createElement(Coordinate$ReasonReactBizcharts.make, {
                  type_: "polar"
                }), React.createElement(Bizcharts.Axis, {
                  visible: false
                }), React.createElement(Bizcharts.Tooltip, {
                  showTitle: false
                }), React.createElement(Bizcharts.Interval, {
                  position: "year*population",
                  label: (['year', {
           offset: -15,
        }]),
                  adjust: "stack",
                  style: {
          lineWidth: 1,
          stroke: '#fff',
        }
                }));
}

var make = Stack1;

exports.data = data;
exports.make = make;
/* react Not a pure module */
