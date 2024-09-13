#include <iostream>
#include <iomanip>


 bool is_leap_year( unsigned int year){
    
    bool is_leap{};
    int year2 = (year % 4);

    if( (year2 == 0) && (year % 100 != 0)  ){
       is_leap = true;
    }else{
        is_leap = false;

    }
    
    return std::cout << std::boolalpha << is_leap;
}

int main(){
  
  return is_leap_year(2020);


}
