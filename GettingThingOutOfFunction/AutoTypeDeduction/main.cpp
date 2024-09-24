#include <iostream>
using namespace std;


int main(){

double num1{56.0};
cout << num1 << endl;

double& ref = num1; //if i make this const then i cant change it later with auto&

cout << ref << endl;

++ref;

auto& num2 = ref; // this is the way for auto deduce is reference. if ref is const then auto& keep the const
cout << num2 << endl;

++num2;

cout << num2 << endl;
cout << num1 << endl;
cout << ref << endl;

cout << &num2 << endl; // all to the same address
cout << &num1 << endl;
cout << &ref << endl;
   
    return 0;
}