#include "eliuds_eggs.h"

namespace chicken_coop {

    int positions_to_quantity(int value){
        
        return std::bitset<32>(value).count();
    };

}  // namespace chicken_coop