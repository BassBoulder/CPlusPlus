#include "matching_brackets.h"

namespace matching_brackets {

    bool check(std::string text){

        std::vector<char> char_stack;

        for (char c : text){
            
            switch(c){
                
                case '{':
                case '(':
                case '[':
                    char_stack.push_back(c);
                    break;
                
                case '}':
                    if (char_stack.empty() || char_stack.back() != '{') return false;
                    char_stack.pop_back();
                    break;


                case ')':
                    if (char_stack.empty() || char_stack.back() != '(') return false;
                    char_stack.pop_back();
                    break;

                case ']':
                    if (char_stack.empty() || char_stack.back() != '[') return false;
                    char_stack.pop_back();
                    break;

                default:
                    break;
            } 
        }
        return char_stack.empty();
    }

}  // namespace matching_brackets
