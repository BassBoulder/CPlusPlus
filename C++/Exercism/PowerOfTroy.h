#pragma once

#include <string>
#include <memory>

using namespace std;

namespace troy {

struct artifact {
    // constructors needed (until C++20)
    artifact(string name) : name(name) {}
    string name;
};

struct power {
    // constructors needed (until C++20)
    power(string effect) : effect(effect) {}
    string effect;
};

struct human {
    unique_ptr<artifact> possession;
    shared_ptr<power> own_power;
    shared_ptr<power> influenced_by;
};

void give_new_artifact(human& human, string artifact_name);
void exchange_artifacts(unique_ptr<artifact>& you_have, unique_ptr<artifact>& they_have);
void manifest_power(human& human, string power_name);
void use_power(human& caster, human& target);
int power_intensity(human& human);    
    
}  // namespace troy
