#include <iostream>
#include <string>

using namespace std;

int main() {

    string unformatted_full_name{ "StephenHawking" };

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----

    string first_name{};
    string last_name{};
    string formatted_full_name{};

    first_name = unformatted_full_name.substr(0, 7).insert(7, " ");
    last_name = unformatted_full_name.substr(7, 13);

    formatted_full_name = first_name + "" + last_name;


    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----


    cout << first_name << endl;
    cout << last_name << endl;
    cout << formatted_full_name << endl;

    return 0;
}