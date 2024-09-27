#include <iostream>
using namespace std;

int main(){

    const char * students[]{
        "Daniel","Miguel","Analia","Josefa","Caruso"
    };

    for (const char * student : students)
    {
        cout << student << endl;
    }
    cout << "------------------" << endl;

    //como modificar uma const, para prevenir isso devemos declarar acima assim const char * const students

    const char * new_student {"Kaniel"};
    students[0] = new_student;

for (const char * student : students)
    {
        cout << student << endl;
    }
    return 0;
}