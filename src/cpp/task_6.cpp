/*
 * Author: raximberdi
 * Date:
 * Name:
 */
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

void nextTwoPrimes(int n) {
    int count = 0;
    while (count < 2) {
        n++;
        if (isPrime(n)) {
            cout << n << " ";
            count++;
        }
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The next two prime numbers greater than " << n << " are: ";
    nextTwoPrimes(n);
    return 0;
}
