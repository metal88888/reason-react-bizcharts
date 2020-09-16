
type temperatureInfo = {
  city: string,
  temperature: float,
  month: string,
};

let fixed = (fix: int, f: float) => {
  float_of_string(Js.Float.toFixedWithPrecision(f, ~digits=fix))
}

let makeInfo = (city, month) => {
  {
    city,
    temperature: (Js.Math.random() *. 20.0 +. 5.0) |> fixed(2),
    month
  }
};

let monthes = [ "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" ];
let cities = [ {js|东京|js}, {js|伦敦|js}, {js|上海|js} ];


let applyTo = (x, f) => f(x);

let (<$>) = List.map;
let flat_map = (list_func, list) => {
  (x => applyTo(x) <$> list_func) <$> list
  |> List.flatten
};


let data = flat_map(makeInfo <$> cities,  monthes);

[@react.component]
let make = () => {
  <Chart padding={[|10, 20, 50, 40|]} autoFit=true height={300.0} data={Array.of_list(data)}>
    // <LineAdvance
    //   shape="smooth"
    //   point=true
    //   area=true
    //   position="month*temperature"
    //   color="city"
    // />
    <Line shape="smooth" position="month*temperature" color="city" label="temperature"/>
    <Point position="month*temperature" color="city" />
  </Chart>
}