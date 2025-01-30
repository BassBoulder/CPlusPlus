#include "power_of_troy.h"

namespace troy {

    void give_new_artifact(human& human, string artifact_name){
        human.possession = make_unique<artifact>(artifact_name);
    }

    void exchange_artifacts(unique_ptr<artifact>& you_have, unique_ptr<artifact>& they_have){
        swap(you_have,they_have);
    }
    
    void manifest_power(human& human, string power_name){
        human.own_power = make_shared<power>(power_name);
    }
 
    void use_power(human& caster, human& target){
        target.influenced_by = caster.own_power;
    }

    int power_intensity(human& human){
        return human.own_power.use_count();
    }  
    
}  // namespace troy
