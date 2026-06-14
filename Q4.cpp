#include <bits/stdc++.h>
using namespace std;
int duplicate_element(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        int target = arr[i];
        for (int j = i + 1; j < n; j++) {
            if (target == arr[j]) {
                return target;
            }
        }
    }
    return -1;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << duplicate_element(n, arr) << endl;
    return 0;
}