#include "grains.h"

namespace grains {

    unsigned long long square(int number){
        return 1ULL << (number-1);
    }

    unsigned long long total(){
        unsigned long long answer {};
        for (int i = 1; i <= 64; ++i){
            answer += square(i);
        }
        return answer;
    }
    
}  // namespace grains