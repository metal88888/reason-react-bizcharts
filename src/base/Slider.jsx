import React from "react"
import { Slider } from "bizcharts";

export default function Slider_(props) {
    const _props = {
        end: props.end_,
        ...props
    }
    delete _props['end_']
    return <Slider {..._props}/>
}