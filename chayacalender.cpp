#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int cy = 1;
        for (int i = 0; i < n; i++) {
            int ny = ((cy - 1) / arr[i] + 1) * arr[i];
            cy = ny + 1; 
        }

        cout << cy - 1 << endl;
    }

    return 0;
}
