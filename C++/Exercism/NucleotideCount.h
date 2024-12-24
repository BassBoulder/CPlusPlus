#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H
#include <map>
#include <string>
#include <stdexcept>

using namespace std;

namespace nucleotide_count {

    map<char, int> count (string nucleotides);
    
}  

#endif // NUCLEOTIDE_COUNT_H