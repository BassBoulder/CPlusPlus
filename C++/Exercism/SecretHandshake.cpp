#include "secret_handshake.h"

namespace secret_handshake {

    vector<string> commands(int number){
        string numberBinaryString = bitset<8>(number).to_string();
        int lengthNumberBinaryString = numberBinaryString.length();
        vector<string> response {};

        if (numberBinaryString[lengthNumberBinaryString - 1] == '1'){
            response.push_back("wink");
        }
        if (numberBinaryString[lengthNumberBinaryString - 2] == '1'){
            response.push_back("double blink");
        }
        if (numberBinaryString[lengthNumberBinaryString - 3] == '1'){
            response.push_back("close your eyes");
        }
        if (numberBinaryString[lengthNumberBinaryString - 4] == '1'){
            response.push_back("jump");
        }
        if (numberBinaryString[lengthNumberBinaryString - 5] == '1'){
            reverse(response.begin(), response.end());
        }
        return response;
    }
    
}  // namespace secret_handshake
