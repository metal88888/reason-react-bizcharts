[@bs.module "bizcharts"][@react.component]
external make: (
  ~region: 'region = ?, // 绘制区域的范围
  ~data: array('a) = ?, // 使用同 Chart 的data属性
  ~scale: 'scale = ?, // 使用同 Chart 的 scale 属性。
  ~padding: 'padding = ?, // 使用同 Chart 的 padding 属性。
  ~animate: bool = ?, // 开启或者关闭动画
  ~children: React.element = ?
) => React.element = "View"