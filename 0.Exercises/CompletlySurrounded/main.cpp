#include <iostream>



int main(){

  int x, y;

  int width{20}, height{10};

  std::cout << "WWelcome to territory control, Please enter x and y position: \n";

  std::cout << "Type in your x location: \n";
  std::cin >> x;

  std::cout << "Type in your y location: \n";
  std::cin >> y;

  if((x <= 10 && x >= -10) && (y <= 5 && y >= -5 )){
    std::cout << "You are completely surrounded. Don't move!";

  }else{
    std::cout << "You're out of reach!";
    }
  return 0;


}
