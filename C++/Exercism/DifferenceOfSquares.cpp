#include "difference_of_squares.h"

namespace difference_of_squares {

    int square_of_sum(int value){
    int square_of_sum_result {};
        for(int i = 1; i <= value; i++){
            square_of_sum_result += i;
        }
        return square_of_sum_result * square_of_sum_result;
    }
    
    int sum_of_squares(int value){
    int sum_of_squares_results {};
        for(int i = 1; i <= value; i++){
            sum_of_squares_results += i * i;
        }
        return sum_of_squares_results;
    }

    int difference(int value){
        return square_of_sum(value) - sum_of_squares(value);
    }
    
}  // namespace difference_of_squares
