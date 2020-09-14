'use strict';

var React = require("react");
var Bizcharts = require("bizcharts");

var data = [
  {
    year: "1951 年",
    sales: 38
  },
  {
    year: "1952 \xe5\xb9\xb4",
    sales: 52
  },
  {
    year: "1956 \xe5\xb9\xb4",
    sales: 61
  },
  {
    year: "1957 \xe5\xb9\xb4",
    sales: 45
  },
  {
    year: "1958 \xe5\xb9\xb4",
    sales: 48
  },
  {
    year: "1959 \xe5\xb9\xb4",
    sales: 38
  },
  {
    year: "1960 \xe5\xb9\xb4",
    sales: 38
  },
  {
    year: "1962 \xe5\xb9\xb4",
    sales: 38
  }
];

function App(Props) {
  return React.createElement(Bizcharts.Chart, {
              data: data,
              autoFit: true,
              height: 300.0,
              children: React.createElement(Bizcharts.Interval, {
                    position: "year*sales",
                    color: "grey"
                  })
            });
}

var make = App;

exports.data = data;
exports.make = make;
/* react Not a pure module */
