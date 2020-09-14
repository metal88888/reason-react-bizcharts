'use strict';

var ArcJsx = require("./Annotation/Arc.jsx");
var LineJsx = require("./Annotation/Line.jsx");
var TextJsx = require("./Annotation/Text.jsx");
var ImageJsx = require("./Annotation/Image.jsx");
var RegionJsx = require("./Annotation/Region.jsx");
var DataMarkerJsx = require("./Annotation/DataMarker.jsx");
var DataRegionJsx = require("./Annotation/DataRegion.jsx");
var RegionFilterJsx = require("./Annotation/RegionFilter.jsx");

var make = ArcJsx.default;

var Arc = {
  make: make
};

var make$1 = RegionJsx.default;

var Region = {
  make: make$1
};

var make$2 = LineJsx.default;

var Line = {
  make: make$2
};

var make$3 = TextJsx.default;

var $$Text = {
  make: make$3
};

var make$4 = ImageJsx.default;

var $$Image = {
  make: make$4
};

var make$5 = RegionFilterJsx.default;

var RegionFilter = {
  make: make$5
};

var make$6 = DataMarkerJsx.default;

var DataMarker = {
  make: make$6
};

var make$7 = DataRegionJsx.default;

var DataRegion = {
  make: make$7
};

exports.Arc = Arc;
exports.Region = Region;
exports.Line = Line;
exports.$$Text = $$Text;
exports.$$Image = $$Image;
exports.RegionFilter = RegionFilter;
exports.DataMarker = DataMarker;
exports.DataRegion = DataRegion;
/* make Not a pure module */
