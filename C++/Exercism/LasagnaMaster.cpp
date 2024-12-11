#include "lasagna_master.h"

namespace lasagna_master {

int preparationTime(std::vector<std::string>& layers, int avgPrepTimePerLayer){
    return layers.size() * avgPrepTimePerLayer;
}

struct amount quantities(std::vector<std::string>& layers){
    int noodles {};
    double sauce {};

    for (std::string layer : layers){
        if (layer == "noodles"){
            noodles += 50;
        } else if (layer == "sauce"){
            sauce += 0.2;
        }
    }
    struct amount newAmounts{noodles, sauce};
    return newAmounts;
}
    
void addSecretIngredient(std::vector<std::string>& myList, const std::vector<std::string>& friendsList){
    myList.back() = friendsList.back();
}

void addSecretIngredient(std::vector<std::string>& myList, const std::string& secretIngredient){
    myList.back() = secretIngredient;
}

std::vector<double> scaleRecipe(const std::vector<double> quantities, int portions){
    std::vector<double> newAmounts;

    for (const auto quantity : quantities){
        newAmounts.push_back((quantity/2) * portions);
        }
    return newAmounts;
}
    
}  // namespace lasagna_master
