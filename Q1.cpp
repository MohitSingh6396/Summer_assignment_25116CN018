#include <iostream>
#include <string>
using namespace std;
string decimalToBinary(int n) {
    if (n == 0) return "0";
    string binary = "";
    while (n > 0) {
        binary = char('0' + (n % 2)) + binary;
        n /= 2;
    }
    return binary;
}
int main() {
    int n;
    cin >> n;
    cout << decimalToBinary(n);
    return 0;
}