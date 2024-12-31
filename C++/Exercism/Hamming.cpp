#include "hamming.h"
#include <stdexcept>

namespace hamming {

    int compute(string A, string B){
        
        int hammingDistance {};

        if (A.size() != B.size()){
            throw std::domain_error("Strings are bad");
        }
        
        for (size_t i = 0; i < A.size(); ++i){
            if (A[i] != B[i]){
                hammingDistance++;
            }
        }
    return hammingDistance;
    }

}  // namespace hamming
