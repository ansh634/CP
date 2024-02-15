#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, x, ans;
    cin >> t;

    while (t--) {
        cin >> n >> x;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int last = 0;
        ans = INT_MIN;

        for (int i = 0; i < n; i++) {
            ans = max(ans, arr[i] - last);
            last = arr[i];
        }
        ans = max(ans, 2 * (x - last));
        cout << ans << endl;
    }

    return 0;
}
