open Lib;

type yearData = {
  year: string,
  value: float,
};

let years = string_of_int <$> range(1991, 2000);
let values = [3.0, 4.0, 3.5, 5.0, 4.9, 6.0, 9.0, 11.0];

let data = zip_with((year, value) => {year, value}, years, values) |> Array.of_list;

[@react.component]
let make = () => {
  <Chart
    padding=[|10, 20, 50, 40|]
    autoFit=true
    height=300.0
    width=500.0
    data
    scale=[%raw {| {
      value: {
        min: 0,
      },
    } |} ]>
    <Line position="year*value" />
    <Point position="year*value" />
    <Tooltip showCrosshairs=true />
  </Chart>
};
