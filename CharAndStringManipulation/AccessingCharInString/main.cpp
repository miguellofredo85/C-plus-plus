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

cout << message << endl;


string line{"this is another phrase"};

const char* point = line.c_str(); // this methos will make my var line const, so cant be changed

// point[0] = 'E'; //assignment of read-only location '* point'

cout << line << endl;



string um {"give me give me"};
string dois;
string tres{};

cout << um.size() << " ";
cout << dois.size() << " ";
cout << tres.size() << endl;

cout << "===========" << endl;

cout << um.length() << " ";
cout << dois.length() << " ";
cout << tres.length() << endl;

cout << "===========" << endl;

cout << boolalpha << um.empty() << " ";
cout << boolalpha << dois.empty() << " ";
cout << boolalpha << tres.empty() << endl;

cout << um.capacity() << endl;
um.reserve(100);
cout << um.capacity() << endl;

um.shrink_to_fit(); // fit the capacity to the total of chars in the string
cout << um.capacity() << endl;



return 0;
}