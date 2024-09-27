#include <iostream>
#include <cmath>


int main(){

int val1{144};
int val2{87};

std::cout << "o val1 e menor ao val2?: \n";

std::cout << std::boolalpha << (val1 < val2) << std::endl;

if(val1<val2){
  std::cout << "Sim e menor!" << std::endl;
}else{
  std::cout << "Nao! O val2 e maior!" << std::endl;
}

return 0;
}