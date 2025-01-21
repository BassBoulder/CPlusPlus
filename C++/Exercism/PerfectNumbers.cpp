#include "perfect_numbers.h"

namespace perfect_numbers {

    classification classify(int number){
        int sumResult {0};
        classification answer {};

        if (number <= 0){
            throw domain_error("Number needs to be greater than 0");
        }   

        for (int i = 1; i < number; i++){
            if (number % i == 0){
                sumResult += i;
            }
        }
        if (number < sumResult){
            answer =  perfect_numbers::classification::abundant;
        }
        if (number > sumResult){
            answer =  perfect_numbers::classification::deficient;
        }
         if (number == sumResult){
            answer = perfect_numbers::classification::perfect;
        } 
    return answer;
    }

}  // namespace perfect_numbers
