#include <iostream>
using std::cout;
using std::endl;


template<typename T> T maximum( T a, T c); // all of same type



int main(){

int r{25}, y{765};

double v{35.67}, f{867.9};

std::string e{"sumi ruku"};
std::string h{"daniel sam"};

cout << maximum(r,y) << endl;
cout << maximum(v,f) << endl;
cout << maximum(e,h) << endl;

return 0;
}


template<typename T> T maximum( T a, T c){
  
  return (a > c) ? a : c;
  
}