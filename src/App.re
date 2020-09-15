type intervalData = {
  name: string,
  month: string,
  avgRainfall: float
}


let data: array('a) = [|
  { name: {js|London|js}, month: {js|Jan.|js}, avgRainfall: 18.9 },
  { name: {js|London|js}, month: {js|Feb.|js}, avgRainfall: 28.8 },
  { name: {js|London|js}, month: {js|Mar.|js}, avgRainfall: 39.3 },
  { name: {js|London|js}, month: {js|Apr.|js}, avgRainfall: 20.4 },
  { name: {js|London|js}, month: {js|May|js}, avgRainfall: 47.0 },
  { name: {js|London|js}, month: {js|Jun.|js}, avgRainfall: 20.3 },
  { name: {js|London|js}, month: {js|Jul.|js}, avgRainfall: 24.0 },
  { name: {js|London|js}, month: {js|Aug.|js}, avgRainfall: 0.0 },
	{ name: {js|Paris|js}, month: {js|Jan.|js}, avgRainfall: 19.9 },
  { name: {js|Paris|js}, month: {js|Feb.|js}, avgRainfall: 28.8 },
  { name: {js|Paris|js}, month: {js|Mar.|js}, avgRainfall: 29.3 },
  { name: {js|Paris|js}, month: {js|Apr.|js}, avgRainfall: 0.0 },
  { name: {js|Paris|js}, month: {js|May|js}, avgRainfall: 67.0 },
  { name: {js|Paris|js}, month: {js|Jun.|js}, avgRainfall: 0.0 },
  { name: {js|Paris|js}, month: {js|Jul.|js}, avgRainfall: 23.0 },
  { name: {js|Paris|js}, month: {js|Aug.|js}, avgRainfall: 0.0 },
  { name: {js|Berlin|js}, month: {js|Jan.|js}, avgRainfall: 12.4 },
  { name: {js|Berlin|js}, month: {js|Feb.|js}, avgRainfall: 23.2 },
  { name: {js|Berlin|js}, month: {js|Mar.|js}, avgRainfall: 34.5 },
  { name: {js|Berlin|js}, month: {js|Apr.|js}, avgRainfall: 0.0 },
  { name: {js|Berlin|js}, month: {js|May|js}, avgRainfall: 52.6 },
  { name: {js|Berlin|js}, month: {js|Jun.|js}, avgRainfall: 35.5 },
  { name: {js|Berlin|js}, month: {js|Jul.|js}, avgRainfall: 37.4 },
  { name: {js|Berlin|js}, month: {js|Aug.|js}, avgRainfall: 42.4 },
|];


/**
function Demo() {
  return (
		<div style={{padding:'20px'}}>
			<Chart autoFit data={data} height={400} padding="auto">
				<Interval position="year*sales" />
				<Interaction type="element-highlight" />
				<Interaction type="active-region" />
			</Chart>
		</div>
  );
}
 */

let data2 = [%raw {|
  [
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
]
|}];

[@react.component]
let make = () => {
  let adjust = [%raw {|
    [{
      type: 'dodge',
      marginRatio: 0
    }]
  |}];
  <Chart height={400.0}  width={300.0} padding="auto" autoFit=true data={data2} >
    <Interval adjust color="name"
        position="month*avgRainfall"
      />
    <Tooltip shared=true/> 
    <Interaction type_="active-region"/>
  </Chart>
}