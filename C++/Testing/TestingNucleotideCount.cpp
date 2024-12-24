#include "NucleotideCount.h"

namespace nucleotide_count {

    string count(const map<char, int> nucleotides){
        string nucleotides {};
        set<char> validChars {'A','C','T','G'};

        for (auto map : nucleotides){
            if (validChars.count(map.first) && map.second) > 0 {
                nucleotides += map.first;
            }
        }
        return nucleotides;
    }

}  // namespace nucleotide_count
