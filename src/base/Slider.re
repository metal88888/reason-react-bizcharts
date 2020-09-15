[@bs.module "./Slider.jsx"][@react.component]
external make: (
    ~height: float = ?,
    ~trendCfg: 'trendCfg = ?,
    ~backgroundStyle: 'bstyle = ?,
    ~foregroundStyle: 'fstyle = ?,
    ~handlerStyle: 'hstyle = ?,
    ~textStyle: 'tstyle = ?,
    ~minLimit: float = ?,
    ~maxLimit: float = ?,
    ~start: float = ?,
    ~end_: float = ?,
    ~formatter: ('a, 'b, int) => 'c = ?,
) => React.element = "default"