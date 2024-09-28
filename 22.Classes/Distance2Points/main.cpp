#include <iostream>
#include <cmath>


class Point{
	public : 
	double distance_to( Point target){
		return std::sqrt(std::pow(target.m_x - m_x, 2) + std::pow(target.m_y - m_y, 2) * 1.0);
	}
	double m_x{1};
	double m_y{1};
    
};
int main(){
Point p1;
Point p2;
    p2.m_x = 2;
    p2.m_y = 2;
    std::cout << "distance from p1 to p2 : " << p1.distance_to(p2) << std::endl;

    return 0;
}
