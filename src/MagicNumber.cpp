#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter your favorite whole number: ";
    cin >> num;

    int num2 = (num * 2 + 10) / 2 - num;
    cout << "Calculating your brainwaves...\nProcessing all possibilities...\n" << endl;
    cout << "Your number is: " << num2 << "!!" << endl;
}