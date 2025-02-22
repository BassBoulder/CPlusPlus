#include "scrabble_score.h"

namespace scrabble_score {

    int score(string word){
    
        int result {0};

        for (char c : word){

            switch(toupper(c)){
                
                case 'Q': case 'Z':
                    result += 10;
                    break;

                case 'J': case 'X':
                    result += 8;
                    break;

                case 'K':
                    result += 5;
                    break;
                
                case 'F': case 'H': case 'V': case 'W': case 'Y':
                    result += 4;
                    break;

                case 'B': case 'C': case 'M': case 'P':
                    result += 3;
                    break;

                case 'D': case 'G':
                    result += 2;
                    break;

                default:
                    result += 1;
                    break;
            }
        }
        return result;
    }
}  // namespace scrabble_score
