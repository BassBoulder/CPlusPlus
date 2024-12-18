#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stdexcept>

using namespace std;

namespace grade_school {

    class school {
    private:
        map<int, vector<string>> rosterPrivate;
    public:
        school();
        map<int, vector<string>> roster() const;
        void add(string name, int grade);
        vector<string> grade(int grade) const;
    };
}  // namespace grade_school

#endif // GRADE_SCHOOL_H