import React from "react"

import { Interaction } from "bizcharts"

export default function Interaction_(props) {
    const _props = {
        type: props.type_,
        ...props
    }
    delete _props['type_']
    return <Interaction {..._props}/>
}