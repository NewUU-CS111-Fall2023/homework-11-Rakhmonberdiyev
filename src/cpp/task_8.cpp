/*
 * Author: raximberdi
 * Date:
 * Name:
 */

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int findE(int phi) {
    int e = 2;
    while (gcd(e, phi) != 1)
        e++;
    return e;
}
int findD(int e, int phi) {
    int d = 2;
