#include <iostream>
#include <string>


int main()
{
    int sum_of_digits(int n)
    {
        n = 1234;
        // Write your code below this line
        if (n == 0)
            return 1;
        return n = n + sum_of_digits(n - 1);
    };
    return 0;
}