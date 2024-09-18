#include <iostream>
using namespace std;

int main(){

   int int_value{45};
   double double_value{20.5};

   int& ref_to_int_value1{int_value}; //assignado a travez de inicializacao
   int& ref_to_int_value2 = int_value;
   double& ref_to_double_value{double_value}; // a travez de aasignamento


//values
    cout << int_value << endl; 
    cout << double_value << endl; 
    cout << ref_to_int_value1 << endl; 
    cout << ref_to_int_value2 << endl;
    cout << ref_to_double_value << endl;
    cout << "=================="<< endl;
//addresses
    cout << &int_value << endl;
    cout << &double_value << endl;
    cout << &ref_to_int_value1 << endl;
    cout << &ref_to_int_value2 << endl;
    cout << &ref_to_double_value << endl;


    return 0;
}