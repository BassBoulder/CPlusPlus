#include "pangram.h"

namespace pangram {

    bool is_pangram(const std::string& text) {
        std::unordered_set<char> letters;

        for (auto c : text) {
            if (isalpha(c)) {
                letters.insert(tolower(c));
            }
        }
        return letters.size() == 26;
    }

}  // namespace pangram
