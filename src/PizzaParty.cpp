#include <iostream>
using namespace std;

int main() {
    int people;
    int slicesPerPizza;
    int slicesPerPerson;

    int totalSlices;
    int pizzas;
    int leftOver;

    cout << "How many people will attend: ";
    cin >> people;

    cout << "How many slices will each pizza have: ";
    cin >> slicesPerPizza;

    cout << "How many slices will each person get: ";
    cin >> slicesPerPerson;

    totalSlices = slicesPerPerson * people;
    pizzas = totalSlices / slicesPerPizza;
    if (totalSlices % slicesPerPizza != 0) {
        pizzas += 1;
    }

    cout << "You will need to order " << pizzas << " pizzas with " << pizzas * slicesPerPizza - totalSlices << " left over slices." << endl;
}