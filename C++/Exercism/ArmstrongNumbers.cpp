#include "armstrong_numbers.h"

namespace armstrong_numbers {


    bool is_armstrong_number(const int number){
        
        string IntString = to_string(number);
        int IntStringLength = IntString.length();
        int ArmstrongOutput {};

        for (auto character : IntString){
            
            ArmstrongOutput += (int)character * IntStringLength;
        }
    return number == ArmstrongOutput ? true : false;
    }

}  // namespace armstrong_numbers
