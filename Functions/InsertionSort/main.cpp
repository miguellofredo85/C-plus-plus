#include <iostream>
#include "headers.h"
using std::cout;
using std::endl;




int main(){

int unsorted[]{6,3,5,7,4,2};

insertion_sort(unsorted, 6);
 print_array(unsorted, 6);
  
return 0;
}
