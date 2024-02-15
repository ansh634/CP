#include <bits/stdc++.h>
using namespace std;

int sort(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (k > 1) {
            cout << "Yes";
        } else {
            if (sort(arr)) {
                cout << "Yes";
            } else {
                cout << "No";
            }
        }
        cout << endl;
    }
    return 0;
}
