#include <iostream>
using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cout << "Bir say� girin: ";
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
        cout << number << " bir asal say�d�r.";
    else
        cout << number << " bir asal say� de�ildir.";

    return 0;
}
