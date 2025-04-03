#include "atbash_cipher.h"

using namespace std;

namespace atbash_cipher {

    string plain = "abcdefghijklmnopqrstuvwxyz";
    string cipher = "zyxwvutsrqponmlkjihgfedcba";
    
    string encode(string text){

        string encodedText {};
        int charCount {0};
        
        for (auto c : text){
            if (isalpha(c)){
                encodedText += cipher[plain.find(tolower(c))];
                charCount++;
            }    
            else if (isdigit(c)){
                encodedText += c;
                charCount++;
            }
            if (charCount > 4){
                encodedText += ' ';
                charCount = 0;
            }
        }

        if (!encodedText.empty() && encodedText.back() == ' '){
            encodedText.pop_back();
        }
        
        return encodedText;
    }
    
    string decode(string text){

        string decodedText {};

        for (auto c : text){
            
            if (isalpha(c)){
                decodedText += plain[cipher.find(tolower(c))];
            }
            else if (isdigit(c)){
                decodedText += c;
            }
        }
        return decodedText;
    }
}  // namespace atbash_cipher