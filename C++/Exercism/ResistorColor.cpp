#include "resistor_color.h"

namespace resistor_color {

    const vector<string> color_list
        {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};

    int color_code(const string& color) {
        auto it = find(color_list.begin(), color_list.end(), color);
        if (it != color_list.end()) {
            return static_cast<int>(distance(color_list.begin(), it));
        } else {
            throw invalid_argument("Invalid color: " + color);
        }
    }

    vector<string> colors(){
        return color_list;
    }

}  // namespace resistor_color
