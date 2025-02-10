#include "binary.h"

namespace binary {

    int convert(string number){

        int location = number.length();
        int power = number.length() - 1;
        int result {};
        
        for(int i = 0; i < location; i++){

            if (number[i] != '0' && number[i] != '1'){
                return 0;
            }
                result += (number[i] - '0') * (1 << power);
                power--;
            } 
        return result;
        }
}  // namespace binary