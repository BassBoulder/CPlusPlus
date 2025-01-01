#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H
#include <string>
#include <algorithm>

using namespace std;

namespace rna_transcription {

    char to_rna(char dna);

    string to_rna(string dna);

}  // namespace rna_transcription

#endif // RNA_TRANSCRIPTION_H