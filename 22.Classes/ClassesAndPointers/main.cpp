#include <iostream>
// #include "constants.h" dont need cause its in cylinder.h
#include "cylinder.h"




int main(){
    Cylinder cylinder1(10,10);

        std::cout << "volume cylinder1 : " << cylinder1.volume() << std::endl;





    Cylinder* p_cylinder = &cylinder1;

        std::cout << "original volume p_cylinder: " << p_cylinder->volume() << std::endl;


    p_cylinder->set_base_radius(20); // changing through pointers
    p_cylinder->set_height(20);



    std::cout << "modificated volume p_cylinder: " << p_cylinder->volume() << std::endl;
    
    
    Cylinder* p_cylinder2 = new Cylinder(20, 20);



     std::cout << "volume cylinder1 changed : " << p_cylinder2->volume() << std::endl;

    // //Modify our object
    // cylinder1.set_base_radius(100);
    // cylinder1.set_height(10);

    // std::cout << "volume : " << cylinder1.volume() << std::endl;
    
    delete p_cylinder2;


    return 0;
}