/*
 * Author: raximberdi
 * Date:
 * Name:
 */

#include <iostream>
using namespace std;

int eulerTotient(int a, int b) {
    return (a - 1) * (b - 1);
}

int main() {
    int a, b;
    cout << "Enter two prime numbers: ";
    cin >> a >> b;
    cout << "The Euler's totient function of the product of " << a << " and " << b << " is: " << eulerTotient(a, b);
    return 0;
}
