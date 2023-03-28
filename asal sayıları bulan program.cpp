#include <iostream>
using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cout << "Bir sayı girin: ";
    cin >> number;

    if (number <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= number/2; i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << number << " bir asal sayıdır.";
    else
        cout << number << " bir asal sayı değildir.";

    return 0;
}
