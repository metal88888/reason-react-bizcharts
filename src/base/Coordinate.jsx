import React from 'react'
import { Coordinate } from 'bizcharts'

export default function Coordinate_(props) {
    const _props = {
        type: props.type_,
        ...props
    }
    delete _props['type_']
    return <Coordinate {..._props}/>
}