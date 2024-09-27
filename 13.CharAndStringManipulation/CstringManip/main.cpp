#include <iostream>
#include <cstring>
using namespace std;



int main(){

const char data[]{"The sky is blue my friend."};  
const char data2[]{"Hello my dear friend"}; 
const char* point_data[]{"Meet me in the morning."}; 
const char* point_data1{"Misiones"}; 
const char* point_data2{"Formosa"}; 
char test[size(data)];

cout << "size data: " << size(data) << endl;
cout << "size point_data: " << size(point_data) << endl;

cout << "sizeof data: " << sizeof(data) << endl;
cout << "sizeof point_data: " << sizeof(point_data) << endl;

cout << "strlen data: " << strlen(data) << endl; // nao conta o null char do final
cout << "strlen point_data: " << strlen(*point_data) << endl;

strcpy(test, data); // copy (destination, source)

cout << test << endl;

cout << strcmp(data2, test) << endl;

cout << strcat(test, data2) << endl; // concatena
cout << strncat(test, data, 4) << endl;
cout << strncmp(test, data, 4) << endl; //compara alguns char  

cout << strcmp(point_data2, point_data1) << endl; //compara


return 0;
}    
