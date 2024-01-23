/*
 * Author: Raximberdi
 * Date:
 * Name:
 */

#include <vector>
using namespace std;

int superPow(int a, vector<int>& b) {
    const int base = 1337;
    a %= base; // The result of a^b mod base equals to (a mod base)^b mod base
    int result = 1;
    for (int i = b.size() - 1; i >= 0; --i) {
        result = result * fastPow(a, b[i]) % base;
        a = fastPow(a, 10);
    }
    return result;
}

int fastPow(int a, int b) {
    const int base = 1337;
    int result = 1;
    while (b > 0) {
        if (b & 1) {
            result = result * a % base;
        }
        a = a * a % base;
        b >>= 1;
    }
    return result;
}
