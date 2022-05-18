#include <iostream>

using namespace std;

int main()
{
    char firstString [255];
    char secondString [255];

    int str1 = 0;
    int str2 = 0;

    cout << "Enter first string: ";
    cin.getline (firstString, 255);
    cout << "Enter second string: ";
    cin.getline (secondString, 255);

    while (firstString[str1])
    {
        str1++;
    }

    while (secondString[str2])
    {
        str2++;
    }

    if (str1 > str2)
    {
        cout << "First string is bigger";
    }

    if (str1 < str2)
    {
        cout << "Second string is bigger";
    }

    if (str1 == str2)
    {
        cout << "Strings are equil";
    }
}
