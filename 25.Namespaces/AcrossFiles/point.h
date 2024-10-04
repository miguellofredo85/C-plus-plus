#ifndef POINT_H
#define POINT_H
#include <iostream>
namespace Geom{

class Point
{
public:
  Point();
  Point(double x, double y);

  void print_info()const {
    std::cout << "Point [x: " << x_m << " y: " << y_m << "]" << std::endl;
  }

  ~Point();

private:
  double x_m;
  double y_m;
};
}

#endif