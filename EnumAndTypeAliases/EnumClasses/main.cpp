#include <iostream>
using namespace std;

// enum Month{Jan = 1, January = Jan, February, March, April, May, June, July, August, September, October, November, December}; //can change the value, the num values depends on size of the enum, by default is int  

// enum Month : unsigned char{Jan = 1, January = Jan, February, March, April, May, June, July, August, September, October, November, December}; //can specified the bytes to limits the size of 

  enum DayOfWeek{Monday = 0, Tuesday = 1, Wednesday = 2, Thursday = 3, Friday =  4, Saturday = 5, Sunday = 6};


void print_day(DayOfWeek day){
    switch(static_cast<int>(day)){
        case   0 : 
            std::cout << "Today is Monday";
        break;

        case   1 : 
            std::cout << "Today is Tuesday";
        break;

        case   DayOfWeek::Wednesday : 
            std::cout << "Today is Wednesday";
        break;

        case  3 : 
            std::cout << "Today is Thursday";
        break;

        case  4  : 
            std::cout << "Today is Friday" ;
        break;

        case  5  : 
            std::cout << "Today is Saturday";

         case  6  : 
            std::cout << "Today is Sunday" ;
        break;

        default : 
        std::cout << "No day";
    }
}

int main(){

  // cout << sizeof(Month) << endl; // is int, so will be 4

  // Month month(Month::January);

  //   cout << sizeof(month) << endl; // is int, so will be 4

  // cout << static_cast<int>(month); // must cast


//Your code will go above this line
//Don't modify anything below this line

//Function declaration
print_day(DayOfWeek::Monday);

return 0;
}