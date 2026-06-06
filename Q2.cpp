#include <iostream>
#include <string>
using namespace std;
int binaryToDecimal(string binary) {
    int decimal = 0;
    for (char bit : binary) {
        decimal = decimal * 2 + (bit - '0');
    }
    return decimal;
}
int main() {
    string binary;
    cin >> binary;
    cout << binaryToDecimal(binary);
    return 0;
}