type intervalData = {
  year: string,
  sales: int
}


let data = [|
  { year: {js|1951 年|js}, sales: 38 },
  { year: "1952 年", sales: 52 },
  { year: "1956 年", sales: 61 },
  { year: "1957 年", sales: 45 },
  { year: "1958 年", sales: 48 },
  { year: "1959 年", sales: 38 },
  { year: "1960 年", sales: 38 },
  { year: "1962 年", sales: 38 },
|];

[@react.component]
let make = () => {
  <Chart height={300.0} autoFit=true data={data} >
    <Interval position="year*sales" color="grey" />
  </Chart>
}