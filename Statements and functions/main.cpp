#include <iostream>

int addNum(int first_param, int second_param){

  int result = first_param + second_param;
  return result;

}

int main(){

    int first_num{3};
    int second_num{7};

    std::cout << "first num: "<< first_num << std::endl;
    std::cout << "second num: " << second_num << std::endl;
    
    int sum = first_num + second_num;
    
    std::cout << "sum num: " << sum << std::endl;

    sum = addNum(25, 7);

     std::cout << "sum num: " << sum << std::endl;

     std::cout << "sum num: " << addNum(21,3) << std::endl;

    return 0;
}