#include <iostream>

using namespace std;

int main()
{
    int sizeOfarray = 0;
    int foundNumber = 0;
    bool answer = false;

    cout << "Enter size of the array: ";
    cin >> sizeOfarray;

    int arr [sizeOfarray];

    for(int i = 0; i < sizeOfarray; i++)
    {
        cout << "Enter array's element: ";
        cin >> arr[i];
    }

    cout << "What number do you want to check: ";
    cin >> foundNumber;

    for (int i = 0; i < sizeOfarray; i++)
    {
        if (arr[i] == foundNumber)
        {
            answer = true;
        }
    }

    if (answer == true)
        cout << "This number is in an array";
    else
        cout << "This number is not in an array";

    return 0;
}
