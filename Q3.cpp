#include <iostream>
using namespace std;
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1); // Check if the last bit is set
        n >>= 1;          // Right shift by 1
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    cout << "Number of set bits = " << countSetBits(n) << endl;
    return 0;
}