#include "nth_prime.h"

namespace nth_prime {

bool is_prime(int number){
    if (number < 2) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;

    for (int i = 3; i * i <= number; i += 2){
        if (number % i == 0) return false;
    }
    return true;
}    
    
    int nth (int number){
        
        if (number == 0) throw std::domain_error("Can't be 0 brah");
        
        int count {0};
        int value {1};
        
        while (count < number){
            value++;
            if (is_prime(value)){
                count++;
            }
        }
        return value;
    }
}  // namespace nth_prime