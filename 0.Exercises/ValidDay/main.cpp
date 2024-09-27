#include <iostream>

int main(){
  
  int num{};

  std::cout << "Wich day is today? Enter the numver: \n";
  std::cin >> num;

 switch (num)
 {
  case 1:
        std::cout << "is Monday ";
  break;

  case 2:
  std::cout << "is Tuesday ";

  break;

  case 3:
    std::cout << "is Wednesday ";

  break;

  case 4:
      std::cout << "is Thursday ";

  break;

  case 5:
        std::cout << "is Friday ";

  break;

  case 6:
          std::cout << "is Saturday ";

  break;

  case 7:
          std::cout << "is Sunday ";

  break;
 
 default:
         std::cout <<num << " isnt a day";

  break;
 }
  
  return 0;


}
