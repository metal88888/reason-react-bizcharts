[@bs.module "bizcharts"][@react.component]
external make: (
  ~x: float = ?,
  ~y: float = ?,
  ~width: float = ?,
  ~height: float = ?,
  ~radius: array(float) = ?
) => React.element = "Rect";