#include <iostream>
#include <cmath>


int main(){

double celsius{};

std::cout << "Digite a temperatura celsius a converter em Farenheit\n";

std::cin >> celsius;

double farenheit = (9.0/5) * celsius + 32;

std::cout << celsius <<" Celsius is " << farenheit << "Fahrenheit." << std::endl;

return 0;
}