#include <iostream>

using namespace std;

int main()
{
    char string [255];
    char vowels [6] = {'a', 'e', 'o', 'i', 'y', 'u'};
    int str = 0;

    cout << "Enter smth: ";
    cin.getline (string, 255);

    while (string[str])
    {
        for(int i = 0; i < 6; i++)
        {
            if (string[str] == vowels[i] && str % 2 )
            {
                    cout << string[str];
            }
        }
        str++;
    }
    return 0;
}
