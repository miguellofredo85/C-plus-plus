#include <iostream>
using namespace std;

int main(){



//pointer on stack memo

int num {22};
int*point_num = &num;

cout << point_num << endl; //address
cout << *point_num << endl; // value

int* point2{}; // junk address por nao ser inicializada e logo posso iniializar com qualqur cosa e que nao aponte a nada e *point2{22}
int num2{12};

point2 = &num2;

// pointer on heat memori

    int* point{nullptr}; // sempre inicializamos como nullptr caso nao aponte a nada de momento
    point = new int; // aqui salvamos espacio na memoria heat pra puder utilizar quando querramos. tamvem podermos inicializarla assim int* poit{new int {23}}

    delete point; // sempre devemos deletearla luego de su uso para liverar memoria, nunca deletar duas vezes pois podem ocorrer crash do programa ou erros.


    return 0;
}