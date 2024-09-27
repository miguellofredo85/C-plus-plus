#include <iostream>



int main(){

  int present{};
  int past{};

  std::cout << "Wich day is today? Enter the numver: \n";
  std::cin >> present;

  if(present <1 || present >7){
         std::cout << present << " That num isnt a day";
  }

  if(present >=1 || present <=7){

         std::cout << "How many days have passed up to today: \n";
         std::cin >> past;

         }

         if(present == 1){
                std::cout << "Today is Monday ";

         }else if(present == 2){
                std::cout << "Today is Tuesday ";

         }else if(present == 3){
                    std::cout << "Today is Wednesday ";

         }else if(present == 4){
                      std::cout << "Today is Thursday ";

         }else if(present == 5){
                        std::cout << "Today is Friday ";

         }else if(present == 6){
                          std::cout << "Today is Saturday ";

         }else if(present == 7){
                          std::cout << "Today is Sunday ";
         }

         int normalized_diff = (past %7);
  
   int day_in_the_past = present - normalized_diff;

    if(day_in_the_past < 0){
       day_in_the_past += 7;
   }

   std::cout << "If we went " << past << " days in the past we would hit a ";
    if(day_in_the_past == 1){
        std::cout << "Monday" << std::endl;
    }else if(day_in_the_past == 2){
        std::cout << "Tuesday" << std::endl;
    }else if(day_in_the_past == 3){
        std::cout << "Wednesday" << std::endl;
    }else if(day_in_the_past == 4){
        std::cout << "Thursday" << std::endl;
    }else if(day_in_the_past == 5){
        std::cout << "Friday" << std::endl;
    }else if(day_in_the_past == 6){
        std::cout << "Saturday" << std::endl;
    }else{
        std::cout << "Sunday" << std::endl;
    }


  
  return 0;


}
