#include <iostream>
#include <ctime>
using namespace std;


int main(){

  // o programa sempre dara o memso nro random cada vez que execute ele , pra isso mudar devo usar o seed srand(time(0))

  // int rand_num = rand();

//   cout << rand_num << endl; 
// rand_num = rand();

//   cout << rand_num << endl;

//   cout << RAND_MAX << endl; //32767
// rand_num = rand();

//   cout << rand_num << endl;


//random ranges entre 1 e 10

srand(time(0)); 

// int ranum = rand() % 11; // randoms entre 1 e 10, se querio qu seja entra 1 e 30 seria o %31 e assim

// se quero que seja entre 0 e 11 seria assim (rand() % 11)+1

int ranum;
for (size_t i = 0; i < 20; i++)
{
  ranum = rand(); //aqui sim vai dar un numero diferente a cada vez  que entra ao loop mas sempre que corra o programa serao os mesmos numero caso nao tenha o srand(time(0))
  cout << ranum << endl;
}


return 0;
}