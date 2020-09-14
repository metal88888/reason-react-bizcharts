[@bs.module "bizcharts"][@react.component]
external make: (
  ~showTitle: bool = ?, // 是否展示 tooltip 标题。
  ~title: string = ?, // 设置 tooltip 的标题内容
  ~showMarkers: bool = ?, // 是否展示鼠标所在当前数据的标记
  ~marker: 'mark = ?, // 当前数据标记的样式。
  ~showContent: bool = ?, // 是否展示 tooltip 内容框。
  ~position: [ `top | `bottom | `left | `right ]  = ?, // 设置当前坐标轴的摆放位置
  ~shared: bool = ?, // 是否展示多条 tooltip
  ~follow: bool = ?, // 设置 tooltip 是否跟随鼠标移动。默认为 true，即跟随。
  ~offset: float = ?, // 设置 tooltip 距离鼠标的偏移量。
  ~enterable: bool = ?, // 用于控制是否允许鼠标进入 tooltip，默认为 false，即不允许进入。
  ~showCrosshairs: bool = ?, // 是否展示 crosshairs
  ~crosshairs: 'crosshairs = ?, // 配置 tooltip 的 crosshairs，当且仅当 showCrosshairs 为 true 时生效
  ~container: 'container = ?, // string | HTMLElement 自定义 tooltip 的容器。
  ~linkage: 'linkage = ?, // string | [string, function] 实现tooltip的联动
  ~containerTpl: string = ?, // 用于指定图例容器的模板，自定义模板时必须包含各个 dom 节点的 class。
  ~itemTpl: string = ?, // 每项记录的默认模板，自定义模板时必须包含各个 dom 节点的 class
  ~domStyles: 'domStyles = ?, // 传入各个 dom 的样式。

) => React.element = "Tooltip";