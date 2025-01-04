#include <iostream>

using namespace std;

int main(void)
{
    int n = 159;

    int sum_digits = 0;
    while(n>0)
    {
        sum_digits += n % 10;
        n /= 10;
    }
    
    string sum = to_string(sum_digits);
    cout << "sum is " << sum << endl;
    return 1;
}