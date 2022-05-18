#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int sum = 0;
    int temp = 0;

    cout << "Enter your number: ";
    cin >> number;

    temp = number;

    while (temp != 0)
    {
        int sup = 0;
        sup += temp %10;
        if (sup %2 == 0)
        {
            sum += sup;
        }
        temp = temp/10;
    }
    cout << "Sum of even numbers are: " << sum;

    return 0;
}
