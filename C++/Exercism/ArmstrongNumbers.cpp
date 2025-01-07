#include "armstrong_numbers.h"

namespace armstrong_numbers {


    bool is_armstrong_number(const int number){
        
        string IntString = to_string(number);
        int IntStringLength = IntString.length();
        int ArmstrongOutput {0};

        for (auto character : IntString){
            int digit = character - '0';
            ArmstrongOutput += pow(digit, IntStringLength);
        }
    //return number == ArmstrongOutput ? true : false;
    return number == ArmstrongOutput;
    }

}  // namespace armstrong_numbers
