#include "triangle.h"
#include <stdexcept>

namespace triangle {

flavor kind(double a, double b, double c) {

    if (( a == 0 && b == 0 && c == 0) || (a < 0 || b < 0 || c < 0)){
        throw std::domain_error("Criminal Triangle");
    }

    if ((a + b < c) || (b + c < a) || (c + a < b)){
        throw std::domain_error("Not Technically a Triangle");
    }
    
    if ( (a == b) && (a == c) && (b == c) ){
        return flavor::equilateral;
    }
    
    if ( a == b || b == c || c == a){
        return flavor::isosceles;
    }
  
    return flavor::scalene;
}
    
}  // namespace triangle
