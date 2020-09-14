

// Basic Usage

// <Chart width={600} height={400} data={data}>
//   <Legend visible={false} /> // 关闭Legend
//   <Tooltip visible={false} /> // 关闭Tooltip
//   <Geom type="bar" position="genre*sold" color="genre" />
// </Chart>


[@bs.module "bizcharts"][@react.component]
external make: (
  ~data: array('a), // 数据源，是一个由对象组成的集合
  ~autoFit: bool = ?, // 图表大小自适应，对外层容器的宽和高都会适应。默认值为 false， 关闭自适应。
  ~width: float = ?,
  ~height: float = ?,
  ~padding: 'b = ?, // number | number [] | 'auto'
  ~appendPadding: float = ?,
  ~forceUpdate: bool = ?, // 默认值 false
  ~pixelRatio: float = ?, // 设置设备像素比，默认取浏览器的值 window.devicePixelRatio。
  ~pure: bool = ?, // 设置pure属性可以得到一个干净的图表画布。同时，可以自行配置<Axis/> <Tooltip /> …等组件。
  ~errorContent: 'c = ?, // reactNode | string
  ~placeholder: 'd = ?, // reactNode | string
  ~defaultInteractions: array(string) = ?, // 默认值['tooltip','legend-active','legend-filter','continuous-filter']
  ~interactions: array(string) = ?,
  ~animate: bool = ?,
  ~filter: 'e = ?, // array | object
  ~scale: 'f = ?,
  ~children: React.element
) => React.element = "Chart"