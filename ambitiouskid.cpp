#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, ans = LLONG_MAX, key = 0;
    bool flag = false;
    cin >> n;
    vector<long long> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] == 0) {
            flag = true;
        } else if (arr[i] > 0) {
            ans = min(ans, arr[i]);
        } else {
            key = max(key, arr[i]);
        }
    }

    if (flag) {
        cout << 0 << endl;
    } else if (ans == LLONG_MAX) {
        cout << key << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}
