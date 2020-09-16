[@bs.module "bizcharts"][@react.component]
external make: (
  ~name: string = ?, // 坐标轴对应数据源中的字段名
  ~visible: bool = ?, // 对应name的坐标轴是否可见，默认值true
  ~position: [ `top | `bottom | `left | `right ]  = ?, // 设置当前坐标轴的摆放位置
  ~title: 'title = ?, // object | boolean 当前坐标轴标题是否需要显示,及其样式配置
  ~line: 'line = ?, // object | boolean 设置坐标轴线的样式，包括线的颜色、粗细等
  ~tickLine: 'tickLine = ?, // object | boolean 设置坐标轴的刻度线
  ~label: 'label = ?, // 设置坐标轴文本的样式
  ~grid: 'grid = ?, // 设置坐标轴网格线的样式，网格线与坐标轴线垂直
  ~subTickLine: 'subTickLine = ?, // 前坐标轴次刻度线样式配置
  ~animate: bool = ?, // 动画开关，默认开启。
  ~verticalFactor: int = ?, // 标记坐标轴 label 的方向，左侧为 1，右侧为 -1
  ~children: React.element = ?,
) => React.element = "Axis"