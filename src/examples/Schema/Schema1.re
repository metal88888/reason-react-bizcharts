
type schema1Data = {
  x: string,
  low: int,
  q1: int,
  median: int,
  q3: int, 
  high: int,
  mutable range: array(int),
};

let data = [|
  { x: "Oceania", low: 1, q1: 9, median: 16, q3: 22, high: 24, range: [||] },
  { x: "East Europe", low: 1, q1: 5, median: 8, q3: 12, high: 16, range: [||] },
  { x: "Australia", low: 1, q1: 8, median: 12, q3: 19, high: 26, range: [||]  },
  { x: "South America", low: 2, q1: 8, median: 12, q3: 21, high: 28, range: [||] },
  { x: "North Africa", low: 1, q1: 8, median: 14, q3: 18, high: 24, range: [||] },
  { x: "North America", low: 3, q1: 10, median: 17, q3: 28, high: 30, range: [||] },
  { x: "West Europe", low: 1, q1: 7, median: 10, q3: 17, high: 22, range: [||] },
  { x: "West Africa", low: 1, q1: 6, median: 8, q3: 13, high: 16, range: [||] }
|];

for (i in 0 to Array.length(data) - 1) {
  Js.log(i);
  let item = Array.unsafe_get(data, i);
  Js.log(item);
  item.range = [|item.low, item.q1, item.median, item.q3, item.high|];
}

Js.log(data);

let x: {"x": int, "y": int} = %obj({x: 1, y: 2})

[@react.component]
let make = () => {
  let tmpl = {js|
    <li class="g2-tooltip-list-item" data-index={index} style="margin-bottom:4px;">
      <span style="background-color:{color};" class="g2-tooltip-marker"></span>
      {name}<br/>
      <span style="padding-left: 16px">最大值：{high}</span><br/>
      <span style="padding-left: 16px">上四分位数：{q3}</span><br/>
      <span style="padding-left: 16px">中位数：{median}</span><br/>
      <span style="padding-left: 16px">下四分位数：{q1}</span><br/>
      <span style="padding-left: 16px">最小值：{low}</span><br/>
    </li>
  |js};

  <Chart
     height=300.0
     width=500.0
     data
     autoFit=true
     scale={%obj({
        range: {
          max: 35,
          nice: true
        }
     })}
   >
     <Tooltip
        showTitle={false}
        showMarkers={false}
        itemTpl=tmpl
     />
    
      <Schema
        position={"x*range"}
        shape={"box"}
        style=[%raw {| {
          stroke: "#545454",
          fill: "#1890FF",
          fillOpacity: 0.3
        } |}]
        tooltip=[%raw {| [
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
        ] |}]
      />
    <Interaction type_="active-region" />
  </Chart>
}