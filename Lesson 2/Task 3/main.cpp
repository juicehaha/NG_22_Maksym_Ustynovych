#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int number1 = 0;
    int hashcode = 0;

    cout << "Enter your number: ";
    cin >> number;

    number1 = number;

    while (number1!=0){
        if (number1 % 10 == number1 /10 % 10 )
        {
            hashcode += number1 % 10;
        }

        if (number1 < 10 && number1 == number1 % 10)
        {
			hashcode += number1;
        }
        number1 /= 10;
    }
    cout << "Hashcode = " << hashcode;

    return 0;
}
