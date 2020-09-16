[@bs.module "bizcharts"][@react.component]
external make: (
  ~x: float = ?,
  ~y: float = ?,
  ~r: float = ?
) => React.element = "Circle";