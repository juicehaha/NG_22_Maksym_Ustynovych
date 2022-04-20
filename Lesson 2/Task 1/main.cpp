#include <iostream>

using namespace std;

int main()
{
    int sizeSquare = 0;

    cout << "Enter size of the square: ";
    cin >> sizeSquare;

    for(int i = 0; i < sizeSquare; i++){
        for (int j = 0; j < sizeSquare; j++){
            if ( i != 0 && i != sizeSquare-1 && j != 0  && j != sizeSquare-1)
            {
                cout << ' ';
            }
            else {
                cout << '*';
            }
        } cout << endl;
    }
    return 0;
}
