[@bs.module "./Coordinate.jsx"][@react.component]
external make: (
    ~type_: string = ?,
    ~radius: float = ?,
    ~innerRadius: float = ?,
    ~startAngle: float = ?,
    ~endAngle: float = ?,
    ~rotate: float = ?,
    ~scale: array(float) = ?,
    ~reflect: [ `x | `y ] = ?,
    ~transpose: bool = ?,
    ~actions: array('action) = ?,
    ~children: React.element = ?,
) => React.element = "default"