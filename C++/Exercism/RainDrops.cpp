#include "raindrops.h"

namespace raindrops {
    std::string convert(int raindropsnumber) {
        std::string rain = "";
        if (raindropsnumber % 3 == 0) rain += "Pling";
        if (raindropsnumber % 5 == 0) rain += "Plang";
        if (raindropsnumber % 7 == 0) rain += "Plong";
        if (rain == "") rain = std::to_string(raindropsnumber);
        return rain;
    }
}