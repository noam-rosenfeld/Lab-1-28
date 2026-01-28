#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double TAX_RATE = 0.075;
    double item_price;

    cout << "Enter the price of your item: ";
    cin >> item_price;

    double item_tax = item_price * TAX_RATE;
    item_price += item_tax;

    cout << "Price: $" << fixed << setprecision(2) << item_price << endl;
}