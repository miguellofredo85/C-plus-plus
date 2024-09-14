#include <iostream>
using namespace std;

int main(){
char message1 []{'H','e', 'l','l','o'}; // ao momento de compilar nao auto fill pq nao tem ao final '\0' e teremos lixo
//char c []{'H','e', 'l','l','o','\0'}; null char ao final is the correct way
char message2[] {"Hello"};
char message3[] {"Hello World"};

cout << message1 << endl;
cout << "size message1: "<< sizeof(message1) << endl;

cout << message2 << endl;
cout << "size message2: "<< sizeof(message2) << endl;

cout << message3 << endl;
cout << "size message3: "<< sizeof(message3) << endl;

int num[]{1,2,3,4,5};

cout << num; //0x32501ffb00
return 0;
}