type stack1Data  = {
  year: string,
  population: float
};

let data = [|
    { year: "2001", population: 41.8 },
    { year: "2002", population: 38.0 },
    { year: "2003", population: 33.7 },
    { year: "2004", population: 30.7 },
    { year: "2005", population: 25.8 },
    { year: "2006", population: 31.7 },
    { year: "2007", population: 33.0 },
    { year: "2008", population: 46.0 },
    { year: "2009", population: 38.3 },
    { year: "2010", population: 28.0 },
    { year: "2011", population: 42.5 },
    { year: "2012", population: 30.3 },
  |];

[@react.component]
let make = () => {
  <Chart height=300.0 width=500.0 data autoFit=true>
      <Coordinate type_="polar" />
      <Axis visible={false} />
      <Tooltip showTitle={false} />
      <Interval
        position="year*population"
        adjust="stack"
        // element-highlight
        style=[%raw {| {
          lineWidth: 1,
          stroke: '#fff',
        } |}]
        label=[%raw {| ['year', {
           offset: -15,
        }] |}]
      />
    </Chart>
}