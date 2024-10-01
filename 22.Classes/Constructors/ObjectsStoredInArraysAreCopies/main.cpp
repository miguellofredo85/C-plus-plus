#include <iostream>
#include "person.h"


int main(){

    Person p1("John","Snow",25);
    Person p2("Sam","Gray",45);
    Person p3("Johny","Drill",5);
    p1.print_info();
    p2.print_info();
    p3.print_info();

    std::cout << "----" << std::endl;


    // Person students[] {p1,p2,Person("Miguel", "Josefo", 45)}; this one will print p1 and p2 cause are copies, the last one is consider as the build in class and wont consider print
    Person students[] {p1,p2,p3}; 
    for(size_t i{}; i < std::size(students); ++i){ 
        students[i].print_info();
    }

    std::cout << "----" << std::endl;
    for(Person& p : students){   // take off the & and see diferent addresses that are copies
        p.print_info();
    }


   
    return 0;
}