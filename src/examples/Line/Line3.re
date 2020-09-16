open Lib;

type line3Type = {
  month: string,
  value: int,
}

let monthes = [ "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" ];
let values = [51, 91, 34, 47, 63, 58, 56, 77, 99, 106, 88, 56];

let data = zip_with((month, value) => {month, value}, monthes, values) |> Array.of_list;

[@react.component]
let make = () => {
  <Chart
    scale=[%raw {|
      {value: {min: 0}}
    |}]
    padding=[|10.0, 20.0, 50.0, 40.0|]
    autoFit=true
    height=300.0
    width=500.0
    data
  >
    <Line shape="hv" position="month*value" />
  </Chart>
}