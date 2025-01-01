#include "rna_transcription.h"

namespace rna_transcription {

    char to_rna(char dna){
        
        switch(dna){
            case 'G':
                return 'C';
                break;
            case 'C':
                return 'G';
                break;
            case 'T':
                return 'A';
                break;
            case 'A':
                return 'U';
                break;
        }
        return '_';
    }

    string to_rna(string dna){
        transform(begin(dna), end(dna), begin(dna), [] (char c){
            return to_rna(c);});
        
        return dna;
    }
}  // namespace rna_transcription
