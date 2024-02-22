#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;

    while (t--) {
        long long int x, y;
        cin >> x >> y;

        long long int qualificationTime = 1.07 * x;

        if (y <= qualificationTime) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
