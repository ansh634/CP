#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, count = 0, count1 = 0;
        cin >> n;
        int maxi = INT_MIN;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 0) {
                count++;
            } else {
                maxi = max(maxi, count);
                count = 0;
            }
            if (arr[i] == 1) {
                count1++;
            }
        }
        if (count1 == n) {
            cout << "0" << endl;
        } else {
            cout << max(maxi, count) << endl;
        }
    }
    return 0;
}
