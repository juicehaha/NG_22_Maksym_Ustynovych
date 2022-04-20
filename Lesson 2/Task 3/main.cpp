#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int hashcode = 0;

    cout << "Enter your number: ";
    cin >> number;

 while (number!=0){
        if (number % 10 == number /10 % 10 ){
            hashcode += number % 10;
        }

        if (number < 10 && number == number % 10){
			hashcode += number;
        }
            number /= 10;
    }
    cout << "Hashcode = " << hashcode;

    return 0;
}
