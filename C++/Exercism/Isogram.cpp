#include "isogram.h"

namespace isogram {
    
    bool is_isogram(const string &word){

        map<char, int> char_count;

        string newWord = word;
        newWord.erase(remove(newWord.begin(), newWord.end(), '-'), newWord.end());
        newWord.erase(remove(newWord.begin(), newWord.end(), ' '), newWord.end());
        
        for (auto c : newWord){
            char_count[tolower(c)]++;
        }
        
        for (auto value : char_count){
            if (value.second > 1){
               return false;
            }
        }
        return true;
    }
    
}  // namespace isogram