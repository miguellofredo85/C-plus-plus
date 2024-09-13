#include <iostream>
#include <iomanip>
#include <bitset>


int main(){
  const unsigned int column{30}; 
  const unsigned char mask_bit_0{0b00000001}; // bit 0
  const unsigned char mask_bit_1{0b00000010}; // bit 1
  const unsigned char mask_bit_2{0b00000100}; // bit 2
  const unsigned char mask_bit_3{0b00001000}; // bit 3
  const unsigned char mask_bit_4{0b00010000}; // bit 4
  const unsigned char mask_bit_5{0b00100000}; // bit 5
  const unsigned char mask_bit_6{0b01000000}; // bit 6
  const unsigned char mask_bit_7{0b10000000}; // bit 7

  //reset mask with 0 bites

  unsigned char var_mask{0b00000000};

    //check state bite
    // std::cout << "the 0 bit is : " << ((var_mask & mask_bit_0)>>0) << std::endl; 
    // std::cout << "the 1 bit is : " << ((var_mask & mask_bit_1)>>1) << std::endl; 
    // std::cout << "the 2 bit is : " << ((var_mask & mask_bit_2)>>2) << std::endl; 
    // std::cout << "the 3 bit is : " << ((var_mask & mask_bit_3)>>3) << std::endl; 
    // std::cout << "the 4 bit is : " << ((var_mask & mask_bit_4)>>4) << std::endl; 
    // std::cout << "the 5 bit is : " << ((var_mask & mask_bit_5)>>5) << std::endl; 
    // std::cout << "the 6 bit is : " << ((var_mask & mask_bit_6)>>6) << std::endl; 
    // std::cout << "the 7 bit is : " << ((var_mask & mask_bit_7)>>7) << std::endl; 

  std::cout << std::setw(column) << "var : " << std::setw(column) << std::bitset<8>(var_mask) << std::endl;

  // var_mask |= mask_bit_1;
  var_mask |= mask_bit_1;

  std::cout << std::setw(column) << "var mask 1: " << std::setw(column) << std::bitset<8>(var_mask) << std::endl;

  var_mask |= mask_bit_5;

  std::cout << std::setw(column) << "var mask 5  : " << std::setw(column) << std::bitset<8>(var_mask) << std::endl;

  var_mask &= (~mask_bit_1) ; // resetea posicion 1 a 0

  std::cout << std::setw(column) << "var mask 1 reseteado  : " << std::setw(column) << std::bitset<8>(var_mask) << std::endl;

  
  var_mask &= (~mask_bit_5) ; // resetea posicion 1 a 0

  std::cout << std::setw(column) << "var mask 5 reseteado : " << std::setw(column) << std::bitset<8>(var_mask) << std::endl;

  var_mask |= (mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7 ) ; // setting all bites

  std::cout << std::setw(column) << "var mask setting all bites : " << std::setw(column) << std::bitset<8>(var_mask) << std::endl;

   var_mask &= ~(mask_bit_2 | mask_bit_4 | mask_bit_6) ; // resetting bites en posiciones 2, 4 6

  std::cout << std::setw(column) << "var mask resetting bites posiciones 2, 4,6 : " << std::setw(15) << std::bitset<8>(var_mask) << std::endl;

   std::cout << "the 0 bit is : " << ((var_mask & mask_bit_0)>>0) << std::endl; 
    std::cout << "the 1 bit is : " << ((var_mask & mask_bit_1)>>1) << std::endl; 
    std::cout << "the 2 bit is : " << ((var_mask & mask_bit_2)>>2) << std::endl; 
    std::cout << "the 3 bit is : " << ((var_mask & mask_bit_3)>>3) << std::endl; 
    std::cout << "the 4 bit is : " << ((var_mask & mask_bit_4)>>4) << std::endl; 
    std::cout << "the 5 bit is : " << ((var_mask & mask_bit_5)>>5) << std::endl; 
    std::cout << std::boolalpha;
    std::cout << "the 6 bit is : " << static_cast<bool>((var_mask & mask_bit_6)>>6) << std::endl; 
    std::cout << "the 7 bit is : " << ((var_mask & mask_bit_7)>>7) << std::endl; 

    //Toggle position 1

    var_mask ^= mask_bit_1;

    std::cout << "toggle bit en posicion 1 a 0: " << std::bitset<8>(var_mask) << std::endl; 

return 0;
}