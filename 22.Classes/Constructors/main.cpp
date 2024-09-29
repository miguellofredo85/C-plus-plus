#include <iostream>

// const double PI {3.1415926535897932384626433832795};

// class Cylinder {
//     public : 
//         //Constctors
//         Cylinder(){
//             base_radius = 2.0;
//             height = 2.0;
//         }

//         Cylinder(double rad_param,double height_param){
//             base_radius = rad_param;
//             height = height_param;
//         }
   
//         //Functions (methods)
//         double volume(){
//             return PI * base_radius * base_radius * height;
//         }

//     private : 
//         //Member variables
//         double base_radius{1};
//         double height{1};
// };

class Box {

	public : 
	//methods
	// Box = default;

	Box(double width, double length, double height){
	    
	 m_width = width;
	 m_length = length;
	 m_height = height;
	    
	}
	
	
	
	double base_area(){
		return m_width * m_length;
	}
	double volume(){
		return base_area() * m_height;
	}

	//member variables
	private : 
	double m_width{1};
	double m_length{1};
	double m_height{1};
};


int main(){
    //Cylinder cylinder1(10,4); // Object
    // Cylinder cylinder1;
    // std::cout << "volume : " << cylinder1.volume() << std::endl;

    Box box(10.1,20.4,30.3);
    std::cout << "base area : " << box.base_area() << std::endl;
    std::cout << "volume : " << box.volume() << std::endl;

    return 0;
}