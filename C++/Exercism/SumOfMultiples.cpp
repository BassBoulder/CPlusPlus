#include "sum_of_multiples.h"

namespace sum_of_multiples {

    int to(vector<int> magicItems, int playerLevel){
        
        int energyPoints {};
        
        for (int i = 0; i < playerLevel; i++){
            for (int j : magicItems){
                if (i % j == 0){
                    energyPoints += i;
                    break;
                }
            }
        }
        return energyPoints;
    };

}  // namespace sum_of_multiples
