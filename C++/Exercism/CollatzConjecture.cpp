#include "collatz_conjecture.h"
#include <stdexcept>

namespace collatz_conjecture {

    int steps(int number){

        int howManySteps {};

        //Error handling
        if (number <= 0){
            throw std::domain_error("Number can not be less than or equal to zero.");
        }

        //0 Steps needed
        if (number == 1){
            howManySteps = 0;
        } else {        
            //bones of the task
            do {
                if (number % 2 == 0){
                    number = number / 2;
                    howManySteps++;
                } else {
                    number = (number * 3) + 1;
                    howManySteps++;
                }
            } while (number > 1);
        }
        return howManySteps;
    }
}  // namespace collatz_conjecture
