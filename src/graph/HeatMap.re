[@bs.module "bizcharts"][@react.component]
external make: (
  ~position: string, // 绘制的图形折点的坐标。"x轴映射的字段*y轴映射的字段",例"x*y"
  ~color: 'a = ?, // string | array 配置折线的颜色。
  ~label: 'b = ?, // string | array 配置折线的标注
  ~tooltip: bool = ?, // 控制当前 Geometry 几何标记的 tooltip 开关,该 Geometry 的数据将不展示在 tooltip 内容框中
  ~animate: 'g = ?, // boolean | object 开启或者关闭动画， 传入object时进行动画配置
  
) => React.element = "HeatMap"