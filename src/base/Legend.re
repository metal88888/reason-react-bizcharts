/**
什么是图例
shape, color, size 只有当 <Geom /> 组件上有这三个属性中任意一个时，并且将 <Legend> 组件的 name 属性跟这个属性的字段关联上，才会显示图例；

shape 属性，会根据不同的 shape 类型生成图例；
color 属性, 会赋予不同的图例项不同的颜色来区分图形；
size 属性, 在图例上显示图形的大小。
图例分为两种：

分类图例。
连续图例。
 */



[@bs.module "bizcharts"][@react.component]
external make: (
  ~name: string = ?, // 图例的对应到数据源中的数据字段名，不传则默认设置所有图例。
  ~visible: bool = ?, // 图例是否可见,默认值:true。
  ~position: string = ?, // 设置图例的显示位置
  ~offsetX: float = ?, // 图例 x 方向的偏移值，数值类型，数值单位为 'px'，默认值为 0。
  ~offsetY: float = ?, // 图例 Y 方向的偏移值，数值类型，数值单位为 'px'，默认值为 0。
  ~layout: [ `horizontal | `vertical ] = ?, // 图例布局方式
  ~title: 'title = ?, // boolean | object 图例标题的显示样式设置，如果值为 null，表示不展示图例标题，默认不展示。
  ~background: 'background = ?, // 配置图例的背景框
  ~filter: ('a, 'b, int) => bool = ?, // 筛选数据方法，要指定name才能生效
  ~onChange: ('event, 'chart) => unit,
  // 连续
  ~slidable: bool = ?, // 连续图例适用，滑块是否可以滑动。
  ~min: float = ?, // 连续图例适用，选择范围的最小值。
  ~max: float = ?,  // 连续图例适用，选择范围的最大值。
  ~value: float = ?, // 连续图例适用，选择的值
  ~track: 'track = ?, // 连续图例适用，选择范围的色块样式配置项。
  ~rail: 'rail = ?, // 连续图例适用，图例滑轨（背景）的样式配置项。
  ~title: 'title = ?, // 连续图例适用，文本的配置项
  ~handler: 'handler = ?, // 连续图例适用，滑块的配置项。
  // 分类图例属性
  ~custom: bool = ?, // 是否为自定义图例，当该属性为 true 时，需要声明 items 属性。
  ~items: array('item)  = ?, // 分类图例适用，用户自己配置图例项的内容。
  ~itemSpacing: float = ?, // 分类图例适用，控制图例项水平方向的间距。
  ~maxItemWidth: float = ?, // 分类图例适用，图例项的最大宽度，超出则自动缩略
  ~itemWidth: float = ?, // 分类图例适用，图例项的宽度, 默认为 null，自动计算
  ~itemHeight: float = ?, // 分类图例适用，图例的高度，默认为 null。
  ~itemValue: 'itemValue = ?, // 配置图例value， 其中formatter可格式化图例name
  ~itemName: 'itemName = ?, // 配置图例name,其中formatter可格式化图例name
  ~maxWidth: float = ?, // ：分类图例适用，图例项最大宽度设置。
  ~maxHeight: float = ?, // ：分类图例适用，图例项最大高度设置。
  ~marker: 'marker = ?, // 分类图例适用，图例项的 marker 图标的配置。
  ~flipPage: bool = ?, // 适用于分类图例，当图例项过多时是否进行分页。
  ~reversed: bool = ?, // 分类图例适用，是否将图例项逆序展示。
) => React.element = "Legend";