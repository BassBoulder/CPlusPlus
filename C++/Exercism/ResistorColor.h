#pragma once
#include <string>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

namespace resistor_color {

    int color_code(const string& color);

    vector<string> colors();

}  // namespace resistor_color
