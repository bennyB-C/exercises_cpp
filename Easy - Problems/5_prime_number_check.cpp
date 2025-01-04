#include <iostream>

using namespace std;

int main()
{
    // get number
        // check if it's divisible for other number than himself and one

    int n = 10171111; // 13 is also prime and is the sum jsjsjs

    for (int i = 3; i < n; ++i)
    {
        if(n%i == 0){
            cout << "Not prime because it can be divided by: " << i << endl;
            return (int)-1.45;
        }
    }
    cout << "Prime" << endl;
    return 0;
}