[@react.component]
let make = () => {
  // <Chart data=[||] padding={`single(1.0)}/>
  let style = ReactDOM.Style.make(
    ~height = "20.0px"
    ,()
  );

  <div style>
    <Chart data=[||] style/>
  </div>
}