#include "point.h"
#include <cad/primitive/point.h>

using namespace lc;
using namespace builder;

const geo::Coordinate& PointBuilder::coordinate() const {
    return _coordinate;
}

PointBuilder* PointBuilder::setCoordinate(const geo::Coordinate& coordinate) {
    _coordinate = coordinate;

    return this;
}

entity::Point_CSPtr PointBuilder::build() {
    return entity::Point_CSPtr(new entity::Point(*this));
}
