#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int number1 = 0;
    int sum = 0;
    int temp = 0;

    cout << "Enter your number: ";
    cin >> number;

    number1 = number;

    while (number1 != 0)
    {
        temp = number1 %10;
        if (temp %2 == 0)
        {
            sum += temp;
        }
        number1 = number1/10;
    }
    cout << "Sum of even numbers are: " << sum;

    return 0;
}
