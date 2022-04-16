#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a = 0, b = 0, c = 0;
    double d = 0, x1 = 0, x2 = 0;
    cout << "Enter a : " << endl;
    cin >> a;
    cout << "Enter b : " << endl;
    cin >> b;
    cout << "Enter c :" << endl;
    cin >> c;

    d = b*b-4*a*c;

    if (d>0){
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        cout <<"x1 = " << x1 << endl;
        cout <<"x2 = " << x2 << endl;
    }

    else if (d == 0){
    x1 = (-b) / (2 * a);
    cout << "x = " << x1 << endl;
    }

    else {
    cout << "No roots" << endl;
    }
}
