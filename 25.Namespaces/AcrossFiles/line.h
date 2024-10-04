#ifndef LINE_H
#define LINE_H

 #include <point.h>
namespace Geom {

  class Line
  {
  public:
    Line(const Point& start, const Point& end);

    void print_info()const {
      std::cout << "Line from " << p_start.print_info() << " to " << 
      p_end.print_info() << std::endl;
    }

  private:
  Point p_start;
  Point p_end;

  };
  
}

#endif