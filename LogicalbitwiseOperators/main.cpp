#include <iostream>
#include <iomanip>
#include <bitset>


int main(){

 int COL_WIDTH{20};
 unsigned char val1{0x3}; //0000 0011
 unsigned char val2{0x5}; //0000 0101

std::cout << std::setw(COL_WIDTH) << "val1 : "
 << std::setw(COL_WIDTH) << std::bitset<8>(val1) << std::endl;

 std::cout << std::setw(COL_WIDTH) << "val2 : "
 << std::setw(COL_WIDTH) << std::bitset<8>(val2) << std::endl;

 //AND
 // comienza comparando los val1 y val2 (bytes) de derecha a izquierda, entonces va a comparar primero si los dos tiene uno, como si entonces coloca 1, todo el resto es 0 pues en el resto de bytes hay diferencias y no igualdad de 0 o 1

 std::cout << std::endl;

  std::cout << "Bitwise AND" << std::endl;


std::cout << std::setw(COL_WIDTH) << "val1 and val2: "
 << std::setw(COL_WIDTH) << std::bitset<8>(val1 & val2) << std::endl;

 //OR

  std::cout << std::endl;

  std::cout << "Bitwise OR" << std::endl;


std::cout << std::setw(COL_WIDTH) << "val1 or val2: "
 << std::setw(COL_WIDTH) << std::bitset<8>(val1 | val2) << std::endl;

  std::cout << std::endl;

  std::cout << "Bitwise ~" << std::endl;

// ~ NOT (todos los valores cambian al contrario)

std::cout << std::setw(COL_WIDTH) << "~val1 : "
 << std::setw(COL_WIDTH) << std::bitset<8>(~val1) << std::endl;

 std::cout << std::setw(COL_WIDTH) << "~val2 : "
 << std::setw(COL_WIDTH) << std::bitset<8>(~val2) << std::endl;

 std::cout << std::setw(COL_WIDTH) << "~01011001 : "
 << std::setw(COL_WIDTH) << std::bitset<8>(~0b01011001) << std::endl;

 std::cout << std::setw(COL_WIDTH) << "~01011001 : "
 << std::setw(COL_WIDTH) << std::bitset<8>(~0x59) << std::endl;

  std::cout << std::setw(COL_WIDTH) << "~01011001 : "
 << std::setw(COL_WIDTH) << std::bitset<8>(~0131) << std::endl;

// ^ XOR (si los dos tienen devuelve 0, si un tiene un 1 y el otro no devuelve 1)

 std::cout << "Bitwise XOR ^" << std::endl;

std::cout << std::setw(COL_WIDTH) << "val1^val2 : "
 << std::setw(COL_WIDTH) << std::bitset<8>(val1 ^ val2) << std::endl;


 // Compound shift left

unsigned char val3{0b00110100};

std::cout << "Initial value: " << std::setw(COL_WIDTH) << std::bitset<8>(val3) << std::endl;

val3 <<= 2;

std::cout << "Shiftea 2 lugares a la izquierda: " << std::setw(COL_WIDTH) << std::bitset<8>(val3) << std::endl;
return 0;

//tambien podemos hacer compound con |= , &= , ^=. Negacion no es permitido.
}