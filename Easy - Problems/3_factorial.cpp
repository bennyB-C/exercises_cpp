#include <iostream>

using namespace std;

int factorial(int n)
{
    if(n==0 || n==1)
        return 1;

    return n * factorial(n - 1);
}

int main(void)
{
    int n = 5;

    // iterative:
    int f = 1;
    for (int i = 2; i <= 5; ++i){
        f *= i;
    }
    cout << "Factorial is " << f << endl;

    // recursive:
    cout << "Factorial is " << factorial(n) << endl;

    return 1;
}