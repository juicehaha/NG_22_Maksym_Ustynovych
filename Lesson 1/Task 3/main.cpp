#include <iostream>

using namespace std;

int main()
{
    int age = 0, answer = 0;
    cout << "Enter your age: ";
    cin >> age;

    if (age > 10){
        cout << "Do you study? (1/0): ";
        cin >> answer;

        if (answer == 1){
            cout << "Cool!";
        }
        else if (answer == 0){
            cout << "Why don't u?";
        }
    }

    else{
        cout << "Wow, ur so grown!";
    }

    return 0;
}
