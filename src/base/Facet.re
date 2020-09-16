[@bs.module "bizcharts"][@react.component]
external make: (
    ~type_: [
        | `rect
        | `list
        | `circle
        | `tree
        | `mirror
        | `matrix
    ] = ?,
    ~fields: array(string) = ?,
    ~eachView: ('view, 'facet) => unit = ?,
    ~padding: 'padding = ?,
    ~showTitle: bool = ?,

    // rect
    ~columnTitle: 'cTitle = ?,
    ~rowTitle: 'rTitle = ?,
    
    // list
    ~cols: int = ?,
    ~title: 'Title = ?,
    
    // circle
    // ~title

    // tree
    ~line: 'line = ?,
    // ~title

    // mirror
    ~transpose: bool = ?,

    // matrix
    // ~rowTitle
    // ~columnTitle

    ~children: React.element = ?

) => React.element = "Facet"