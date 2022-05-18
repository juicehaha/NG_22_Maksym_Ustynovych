#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int hashcode = 0;

    cout << "Enter your number: ";
    cin >> number;


    for (int step = number; step !=0; step /= 10)
    {
        if (step % 10 == step /10 % 10 )
        {
            hashcode += step % 10;
        }

        if (step < 10 && step == step % 10)
        {
			hashcode += step;
        }
    }

    cout << "Hashcode = " << hashcode;

    return 0;
}
