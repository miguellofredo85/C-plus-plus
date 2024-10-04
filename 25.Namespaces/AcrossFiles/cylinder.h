#ifndef CYLINDER_H
#define CYLINDER_H
namespace Geom
{

  class Cylinder
  {
  public:
    Cylinder(double rad, double heigth);
    ~Cylinder();

    double volume()const {
      return PI * p_rad * p_rad * p_heigth;
    }

  private:
    inline static const double PI{3.141592};
    double p_rad;
    double p_heigth;

  };

}

#endif