#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        vector<long long int> x;
        long long int maxi = -11111111;
        for (long long int i = 0; i < n; i++) {
            cin >> v[i];
            maxi = max(maxi, v[i]);
        }

        maxi += 1;

        for (long long int i = 0; i < n; i++) {
            v[i] = n + 1 - v[i];
        }

        for (long long int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
