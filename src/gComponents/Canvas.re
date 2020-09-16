[@bs.module "bizcharts"][@react.component]
external make: (
  ~renderer: string = ?,
  ~width: float = ?,
  ~height: float = ?,
  ~container: 'container = ?, // string | HTMLElement
  ~cursor: string = ?,
  ~children: React.element = ?,

) => React.element = "Canvas"