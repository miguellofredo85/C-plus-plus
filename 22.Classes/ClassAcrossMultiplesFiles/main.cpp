#include <iostream>
// #include "constants.h" dont need cause its in cylinder.h
#include "cylinder.h"




int main(){
    Cylinder cylinder1(10,10);
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    //Modify our object
    cylinder1.set_base_radius(100);
    cylinder1.set_height(10);

    std::cout << "volume : " << cylinder1.volume() << std::endl;


    return 0;
}