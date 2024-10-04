#include <point.h>

namespace Geom {

Point::Point(double x, double y) : x_m(x), y_m(y){}

Point::Point(): Point(0.0, 0.0)

Point::~Point()

}
