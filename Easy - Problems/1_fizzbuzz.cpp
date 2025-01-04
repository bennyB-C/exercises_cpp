#include <iostream>
using namespace std;


int main(void)
{
    // Print 1 --> 100 } for or while
        // 3 conditional --> (Fizz, Buzz, FizzBuzz)

    for (int i = 1; i <= 100; ++i)
    {
        if(i % 15 == 0)
            cout << "FizzBuzz " << endl;
        else if(i%3==0)
        {
            cout << "Fizz " << endl;
        }
        else if(i%5 == 0)
        {
            cout << "Buzz " << endl;
        }
        else{
            cout << i << ' ' << endl;
        }
    }

        return 1;
}