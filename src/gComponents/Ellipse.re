[@bs.module "bizcharts"][@react.component]
external make: (
  ~x: float = ?,
  ~y: float = ?,
  ~rx: float = ?,
  ~ry: float = ?,
) => React.element = "Ellipse";