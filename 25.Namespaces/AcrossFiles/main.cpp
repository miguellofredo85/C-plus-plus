#include <iostream>
#include "point.h"
#include "cylinder.h"
#include "line.h"




int main(){

    Geom::Point p1(10.0,20.0);
    Geom::Point p2(50.0,40.0);
    Geom::Cylinder c1(32.3,54.6);
    Geom::Line l1(p1, p2);
    
    p1.print_info();
    c1.volume();
    l1.print_info();
    return 0;
}
