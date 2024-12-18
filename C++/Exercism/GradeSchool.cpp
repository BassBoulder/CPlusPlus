#include "grade_school.h"

using namespace std;

namespace grade_school {

    school::school(){}
    
    map<int, vector<string>> school::roster() const {
        return rosterPrivate;
    }
    
    void school::add(string name, int grade){
        try{
            auto &vector = rosterPrivate.at(grade);
            auto student = lower_bound(vector.begin(), vector.end(), name);
            vector.insert(student, name);
        }
        catch (const std::out_of_range &e){
            rosterPrivate.insert({grade, {name}});
        }
    }

    vector<string> school::grade(int grade) const{
        try{
            return rosterPrivate.at(grade);
        }        
        catch (const std::out_of_range &e){
            return {};
        }
    }
    
}  // namespace grade_school
