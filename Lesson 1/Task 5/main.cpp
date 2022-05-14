#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a = 0, b = 0, c = 0;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if (b*b-4*a*c > 0)
    {
        double x1 = ((-b) + sqrt(b*b-4*a*c)) / (2 * a);
        cout <<"x1 = " << x1 << endl;
        double x2 = ((-b) - sqrt(b*b-4*a*c)) / (2 * a);
        cout <<"x2 = " << x1 << endl;
    }

    else if (b*b-4*a*c == 0)
    {
        double x1 = (-b) / (2 * a);
        cout << "x = " << x1 << endl;
    }

    else
    {
        cout << "No roots" << endl;
    }
}
