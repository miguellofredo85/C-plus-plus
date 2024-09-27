#include <iostream>
#include <string>


int main(){

   
   int arr[]{1,2,3,4,5,6,7,8,9,0}; //tentando ler e escrever data alem do tamanho do array algo muito mal para o programa e o sistema pois pode se rlido por outros programas  

   arr[34] = 244;

   std::cout << arr[34];

    return 0;
}