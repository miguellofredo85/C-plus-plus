#include <iostream>
#include <cmath>


int main(){
 double length{};
 double height{};
 double width{};

 

 std::cout << "Welcome to box calculator. Enter length, height and width\n";
 std::cout << "Length: ";
 std::cin >> length;
 std::cout << "Height: ";
 std::cin >> height;
 std::cout << "Width: ";
 std::cin >> width;

 double base_area = width * length;
 double volume = base_area * height;

 std::cout << "The base area is : " << base_area << std::endl;
 std::cout << "The volume is : " << volume << std::endl;

return 0;
}