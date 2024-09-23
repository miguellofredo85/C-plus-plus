#include <iostream>
using namespace std;

enum Month{Jan = 1, January = Jan, February, March, April, May, June, July, August, September, October, November, December}; //can change the value, the num values depends on size of the enum, by default is int  

// enum Mont : unsigned char{Jan = 1, January = Jan, February, March, April, May, June, July, August, September, October, November, December}; //can specified the bytes to limits the size of 

int main(){

  cout << sizeof(Month) << endl; // is int, so will be 4

  Month month(Month::January);

    cout << sizeof(month) << endl; // is int, so will be 4

  cout << static_cast<int>(month); // must cast

return 0;
}