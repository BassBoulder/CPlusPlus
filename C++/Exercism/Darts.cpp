#include "darts.h"

namespace darts {

    int score(double x, double y){
        
        double xyvalue = hypot(x, y);

        if (xyvalue <= 1){
            return 10;
        }
        
        if (xyvalue <= 5){
            return 5;
        }
        
        if (xyvalue <= 10){
            return 1;
        }
        
        if (xyvalue > 10){
            return 0;
        }
    return 0;
    }
}  // namespace darts