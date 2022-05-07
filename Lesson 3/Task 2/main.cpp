#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));

    int arrFirst [4] = {};
    int arrSecond [4] = {};
    int firstNumber = 0;
    int secondNumber = 0;
    int sup = 1000;

    for(int i = 0; i < 4; i++)
    {
        arrFirst[i] = rand()%10;
        arrSecond[i] = rand()%10;
    }

    cout << "Your first array is: ";

    for(int i = 0; i < 4; i++)
    {
        cout << arrFirst[i] << ' ';
    }

    cout << endl << "Your second array is: ";

    for(int i = 0; i < 4; i++)
    {
        cout << arrSecond[i] << ' ';
    }

    for(int i = 0; i < 4; i++)
    {
        firstNumber += (arrFirst[i]*sup);
        secondNumber += (arrSecond[i]*sup);
        sup = sup/10;
    }

    if(firstNumber> secondNumber)
        cout << endl << firstNumber << " " << ">" << " " << secondNumber;
    else
        cout << endl << secondNumber << " " << ">" << " " << firstNumber;

    return 0;
}
