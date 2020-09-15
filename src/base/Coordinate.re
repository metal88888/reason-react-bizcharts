[@bs.module "./Coordinate.jsx"][@react.component]
external make: (
    ~type_: string = ?,
    ~rotate: float = ?,
    ~scale: array(float) = ?,
    ~reflect: [ `x | `y ] = ?,
    ~transpose: bool = ?,
    ~actions: array('action) = ?
) => React.element = "default"