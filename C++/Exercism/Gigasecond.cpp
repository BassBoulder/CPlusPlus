#include "gigasecond.h"

namespace gigasecond {

    ptime advance(ptime date){
        return date + seconds(1000000000);
    }
    
}  // namespace gigasecond
