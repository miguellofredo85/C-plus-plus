#include <iostream>
#include "point.h"


int main(){
    Point p1(78.56, 3.45); // a non params will get error cause is deleted
    // Point p0(543.34,345.5);
    // Point p2(p0); deleted copy constructor
    // Point p1(std::move(Point(34.5,6.8))); deleted aslo for build in place
    p1.print_info();
   
    return 0;
}