#include <iostream>

int main(){

  int val{};

  std::cout << "Please type your age\n";
  std::cin >> val;

  if(val >= 21 && val <= 39){
    std::cout << "You are elegivle for the treatement";
  }else if(val <21){
    std::cout << "Too youg for the treatement";
  }else{
     std::cout << "Too old for the treatement";
  }
  
  return 0;


}
