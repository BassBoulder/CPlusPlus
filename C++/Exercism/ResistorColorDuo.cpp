#include "resistor_color_duo.h"

namespace resistor_color_duo {

    const std::vector<std::string> color_list
        {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};

    int value(const std::vector<std::string>& colors) {
        if (colors.size() < 2){
            throw std::invalid_argument("Need at least two colors");
        }

        int value = 0;
        
        for (int i = 0; i < 2; ++i) {
            auto it = find(color_list.begin(), color_list.end(), colors[i]);
            if (it != color_list.end()) {
                value = value * 10 + distance(color_list.begin(), it);
            } else {
                throw std::invalid_argument("Invalid color: " + colors[i]);
            }
        }
        return value;
    }
}  // namespace resistor_color
