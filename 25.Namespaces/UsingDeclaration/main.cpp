#include <iostream>
#include "point.h"
#include "cylinder.h"
#include "line.h"
#include "operations.h"

// using Geom::Point;
// using Geom::Cylinder;
 using namespace Geom;
 using  Math::add;

int main(){

    Point p1(10.0,20.0);
    Point p2(50.0,40.0);
    Cylinder c1(32.3,54.6);
    Line l1(p1, p2);
    
    p1.print_info();
    c1.volume();
    l1.print_info();

    add(45.0,45.0); //weird output 
    
    return 0;
}
