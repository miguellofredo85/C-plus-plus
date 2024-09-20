#include <iostream>
#include <string>
using namespace std;


int main(){

string phrase1{"Hello there"};

for (size_t i = 0; i < size(phrase1); i++)
{
   cout << phrase1.at(i);
   cout << " " << phrase1[i] << '\n' ;
}

phrase1.at(0) = 'F';

cout << phrase1 << endl;

string message{"I am the fenix"};

cout << message.front();
cout << message.back();

cout << endl;


// with references 

char& var1 = message.front();
char& var2 = message.back();

var1 = 'H'; // modifying through references that arent const
var2 = 'S';

cout << message;

return 0;
}