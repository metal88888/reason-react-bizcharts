[@react.component]
let make = () => {
  let style = ReactDOM.Style.make(
    ~display="flex",
    ~flexDirection="column",
    ()
  );

  <div style>
    <Line1/>
    <Line2/>
    <Line3/>
    <Line4/>
    <Stack1/>
    <Schema1/>
  </div>
}