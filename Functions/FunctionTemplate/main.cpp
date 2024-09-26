#include <iostream>
using std::cout;
using std::endl;


// template<typename T> T maximum( T a, T c); // all of same type

template<typename T> T hunt_down( T a, T c[], T d);



int main(){

const std::string students[] {"Steve","Karly","Sally","Salim"} ;
std::string to_find{"Steve"};
hunt_down(to_find,students,4);

// int r{25}, y{765};

// double v{35.67}, f{867.9};

// std::string e{"sumi ruku"};
// std::string h{"daniel sam"};

// cout << maximum(r,y) << endl;
// cout << maximum(v,f) << endl;
// cout << maximum(e,h) << endl;

return 0;
}


// template<typename T> T maximum( T a, T c){
  
//   return (a > c) ? a : c;
  
// }

template<typename T>
 int hunt_down( const T& a, const T* c, size_t d){
    
    for (int i = 0; i < d; i++) {
        if(c[i] ==  a){
            return i;
        }
    }
    return -1;
}