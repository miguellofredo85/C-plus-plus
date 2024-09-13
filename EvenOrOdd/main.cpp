#include <iostream>

int main(){

  int val{};

  std::cout << "Please type in an integral value\n";
  std::cin >> val;

  if(val % 2 == 0){
    std::cout << val << " is even";
  }else{
    std::cout << val << " is odd";
  }
  
  return 0;


}
