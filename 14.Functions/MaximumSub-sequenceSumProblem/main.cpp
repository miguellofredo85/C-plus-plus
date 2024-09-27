#include <iostream>
int max_subsequence_sum(int sequence[] , unsigned int size){

    int sum{};
    int storage_sum1{};
    int iter{};
    int next_iter_start_at{0};
    int whileloop = size;

    // int data[] {3,-4 ,6,1,1,-2,2,3};

    while(whileloop){

    for (iter; iter < size; iter++) {
      sum += sequence[iter];
    }
    if(sum > storage_sum1){

      storage_sum1 = sum;

    }

    next_iter_start_at++;

    iter = iter - (iter - next_iter_start_at); 
    sum = 0;
    whileloop--;

    }

      return storage_sum1;
}



int main(){

  int data[] {3,-4 ,6,1,1,-2,2,3};

  max_subsequence_sum(data, 8);

  auto result  = max_subsequence_sum(data,8);

  std::cout << "result : " << result << std::endl;
   
    return 0;
}