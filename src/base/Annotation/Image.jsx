import React from "react"
import { Annotation } from "bizcharts";

export default function Arc_(props) {
    const _props = {
        end: props.end_,
        ...props
    }
    delete _props['end_']
    return <Annotation.Image {..._props}/>
}