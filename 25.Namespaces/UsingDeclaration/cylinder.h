#ifndef CYLINDER_H
#define CYLINDER_H
#include <iostream>
namespace Geom
{

  class Cylinder
  {
  public:
    Cylinder(double rad, double heigth);

    void volume()const {
      std::cout << PI * p_rad * p_rad * p_heigth;
    }

  private:
    inline static const double PI{3.141592};
    double p_rad;
    double p_heigth;

  };

}

#endif