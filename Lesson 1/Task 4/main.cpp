#include <iostream>

using namespace std;

int main()
{
    double mbPrice = 0, gpuPrice = 0, cpuPrice = 0, discount = 0;

    cout << "Enter motherboard price: ";
    cin >> mbPrice;
    cout << "Enter GPU price: ";
    cin >> gpuPrice;
    cout << "Enter CPU price: ";
    cin >> cpuPrice;
    cout << "Enter discount(%): ";
    cin >> discount;
    cout << "This PC will cost - " << mbPrice + gpuPrice + cpuPrice - ((mbPrice + gpuPrice + cpuPrice) * discount / 100);
    return 0;
}
