#include "nucleotide_count.h"

namespace nucleotide_count {

    map<char, int> count(string nucleotides){
        map<char, int> answer { {'A', 0}, {'C', 0}, {'T', 0}, {'G', 0} };

        for (char c : nucleotides){
            switch (c){
                case 'A':
                case 'C':
                case 'T':
                case 'G':
                    answer[c]++;
                    break;
                default:
                    throw std::invalid_argument("invalid nucleotide");
            }
        }
        return answer;
    }

}  // namespace nucleotide_count
