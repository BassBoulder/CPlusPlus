#if !defined(PERFECT_NUMBERS_H)
#define PERFECT_NUMBERS_H
#include <stdexcept>

using namespace std;

namespace perfect_numbers {

    enum classification{
        perfect,
        abundant,
        deficient,
    };
    
    classification classify(int number);
    
}  // namespace perfect_numbers

#endif  // PERFECT_NUMBERS_H