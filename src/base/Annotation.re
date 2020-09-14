
module Arc = {
    [@bs.module "./Annotation/Arc.jsx"][@react.component]
    external make: (
    ~top: bool = ?,
    ~style: 'style = ?,
    ~animate: bool = ?,
    ~offsetX: float = ?,
    ~offsetY: float = ?,
    ~start: 'start = ?, // array | function
    ~end_: 'end_ = ?, // array | function
    ~position: 'position = ?, // array | function
    ) => React.element = "default"
}

module Region = {
    [@bs.module "./Annotation/Region.jsx"][@react.component]
    external make: (
    ~top: bool = ?,
    ~style: 'style = ?,
    ~animate: bool = ?,
    ~offsetX: float = ?,
    ~offsetY: float = ?,
    ~start: 'start = ?, // array | function
    ~end_: 'end_ = ?, // array | function
    ~position: 'position = ?, // array | function
    ) => React.element = "default"
}

module Line = {
    [@bs.module "./Annotation/Line.jsx"][@react.component]
    external make: (
    ~top: bool = ?,
    ~style: 'style = ?,
    ~animate: bool = ?,
    ~offsetX: float = ?,
    ~offsetY: float = ?,
    ~start: 'start = ?, // array | function
    ~end_: 'end_ = ?, // array | function
    ~position: 'position = ?, // array | function
    ~text: 'text = ?,
    ) => React.element = "default"
}

module Text = {
    [@bs.module "./Annotation/Text.jsx"][@react.component]
    external make: (
    ~top: bool = ?,
    ~style: 'style = ?,
    ~animate: bool = ?,
    ~offsetX: float = ?,
    ~offsetY: float = ?,
    ~start: 'start = ?, // array | function
    ~end_: 'end_ = ?, // array | function
    ~position: 'position = ?, // array | function
    ~content: string,
    ~rotate: float = ?,
    ) => React.element = "default"
}

module Image = {
    [@bs.module "./Annotation/Image.jsx"][@react.component]
    external make: (
    ~top: bool = ?,
    ~style: 'style = ?,
    ~animate: bool = ?,
    ~offsetX: float = ?,
    ~offsetY: float = ?,
    ~start: 'start = ?, // array | function
    ~end_: 'end_ = ?, // array | function
    ~position: 'position = ?, // array | function
    ~src: string,
    ) => React.element = "default"
}


module RegionFilter = {
    [@bs.module "./Annotation/RegionFilter.jsx"][@react.component]
    external make: (
    ~top: bool = ?,
    ~style: 'style = ?,
    ~animate: bool = ?,
    ~offsetX: float = ?,
    ~offsetY: float = ?,
    ~start: 'start = ?, // array | function
    ~end_: 'end_ = ?, // array | function
    ~position: 'position = ?, // array | function
    ~color: string,
    ) => React.element = "default"
}

module DataMarker = {
    [@bs.module "./Annotation/DataMarker.jsx"][@react.component]
    external make: (
    ~top: bool = ?,
    ~style: 'style = ?,
    ~animate: bool = ?,
    ~offsetX: float = ?,
    ~offsetY: float = ?,
    ~start: 'start = ?, // array | function
    ~end_: 'end_ = ?, // array | function
    ~position: 'position = ?, // array | function
    ~point: 'point = ?,
    ~line: 'line = ?,
    ~text: 'text = ?,
    ~autoAdjust: bool = ?,
    ~direction: [`upward | `downward] = ?,
    ) => React.element = "default"
}

module DataRegion = {
    [@bs.module "./Annotation/DataRegion.jsx"][@react.component]
    external make: (
    ~top: bool = ?,
    ~style: 'style = ?,
    ~animate: bool = ?,
    ~offsetX: float = ?,
    ~offsetY: float = ?,
    ~start: 'start = ?, // array | function
    ~end_: 'end_ = ?, // array | function
    ~position: 'position = ?, // array | functiont
    ~lineLength: float = ?,
    ~region: float = ?,
    ~text: 'text = ?,
    ) => React.element = "default"
}