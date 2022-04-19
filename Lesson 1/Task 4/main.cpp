#include <iostream>

using namespace std;

int main()
{
    float mbPrice = 0, gpuPrice = 0, cpuPrice = 0, discount = 0, totalCost = 0;

    cout << "Enter motherboard price: ";
    cin >> mbPrice;
    cout << "Enter GPU price: ";
    cin >> gpuPrice;
    cout << "Enter CPU price: ";
    cin >> cpuPrice;
    cout << "Enter discount(%): ";
    cin >> discount;
    discount = (mbPrice + gpuPrice + cpuPrice) * discount / 100;
    totalCost = mbPrice + gpuPrice + cpuPrice - discount;
    cout << "This PC will cost - " << totalCost;
    return 0;
}
