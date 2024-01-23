/*
 * Author: Raximberdi
 * Date:
 * Name:
 */

#include <string>
#include <vector>
using namespace std;

string decodeMessage(string key, string message) {
    vector<int> charMap(26, -1);
    string result = "";
    int idx = 0;
    for (char c : key) {
        if (c >= 'a' && c <= 'z' && charMap[c - 'a'] == -1) {
            charMap[c - 'a'] = idx++;
        }
    }
    for (char c : message) {
        if (c == ' ') {
            result += ' ';
        } else {
            result += 'a' + charMap[c - 'a'];
        }
    }
    return result;
}
