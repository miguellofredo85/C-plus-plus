#include <iostream>

unsigned int sum_up_to_99(){
    unsigned int sum{};
    const size_t COUNT{99};

    for(int i{}; i <= COUNT; i++){
        sum += i;
    }
    std::cout << sum;

     return sum;
}

int main(){

  sum_up_to_99();

//size_t e a representacao de unsigned int que e usado para medida / tamanho de cosas  
  for(size_t i{}; i <10; i++){ // o iterator i posso declararlo fora do loop e NAO colocar a variavle dentro do for assim for(; i <10; i++) 
    std::cout << "Print " << i << " de C++!" << std::endl;
  }
  for(size_t i{}, x{5}, y{22}; y > 15; ++i, x += 5, y-=1){ // agrupacao de variavles no comeco sepre do mesmo tipo
    std::cout << "value i : " << i << std::endl;
    std::cout << "value x : " << x << std::endl;
    std::cout << "value y : " << y << std::endl;
  }


  for( unsigned char i{0}; i< 255 ; ++i){ // priint A B C D E F G H I J K L M N O P Q R S T U V W X Y Z sem espaco logo da Z
                
            //Don't modify anything above thie line
            //Your code goes below this line
            if(i >= 65 && i <=90)
            std::cout << std::hex << i;
            if(i >= 65 && i < 90){
              std::cout << " ";
            }

            //Your code goes above this line
            //Don't modify anything after this line
        }
  return 0;


}
