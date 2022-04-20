#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int sum = 0;
    int temp = 0;

    cout << "Enter your number: ";
    cin >> number;

    while (number != 0)
    {
        temp = number %10;
        if (temp %2 == 0){
            sum += temp;
        }
        number = number/10;
    }
    cout << "Sum of even numbers are: " << sum;

    return 0;
}
