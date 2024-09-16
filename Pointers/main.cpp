#include <iostream>
using namespace std;

int main(){
    int* point = {nullptr};
   int var1{56};
   point = &var1;
   cout << point << endl; // VALOR DE MEMORIA DA VAR1
   cout << *point << endl; // VALOR DA VAR1

   const char* point3 {"Hello World"};// isso seria um char array, const e ovrigatorio
   char* point2 = {nullptr};
   char var2 = {'H'}; // caso nao coloque const dara erro de compilacao
   point2 = &var2;
   cout << point2 << endl; // VALOR DE MEMORIA DA VAR2
   cout << *point2 << endl; // VALOR DA VAR2
   cout << point3 << endl; // hello world enteiro
   cout << *point3 << endl; // primeira letra da string por e um array


    const char* predictions [] { //colocando o pointer nao preciso colocar a quantidade permitida de caracteres
        "a lot of kinds running in the backyard!",
        "a lot of empty beer bootles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before.",
        ", huum, I don't see anything",
        "you drinking wine"
    };


    //pointer que pode mudar o valor de uma var que nao seja const

    int* point_change{nullptr};
    int var4{2353};
    point_change = &var4;

    *point_change = 4; // muda o valor de var4
    cout << var4 << endl;

    var4 =  45345;

    cout << *point_change << endl; // o valor do pointer sera mudado

    int num{67876};
    point_change = &num; // valor do pointer muda pois e assinada outra var

    cout << *point_change << endl;


    int num2{6456};
    const int* point4{&num2}; // const do pointer nao tem a ver com a var, ela nao sera const

    int num3{9789};
    point4 = &num3; // pero sim pode mudar de var apontada

    cout << *point4 << endl;

// posso ter um pointer const e uma var nao const, os dois const,  mas nao var const e pointer nao const

int num4{534};
int* point5{&num4};
const int* point6{&num4}; // pointer to const var, mas a var nao precisa ser delcarada como const, so fala que nao e possivel mudar esse valor do var, entao o valor da var so pode ser mudado declarando outro valor na var
const int* const point7(&num4); // pointer const to const var
int* const point8{&var4}; // point const to nao const var


//se tiver const var um pointer nao pode apontar a essa ver pois quere dizer que estou tentando modificar o valor da var, e dara erro de compilacao ex. const int var{55}; int* point{&var}

    return 0;
}