#include <iostream>
using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long prod = 1;
        int m = 10, z = 0;

        for (long p = 0; p < n; p++) {
            long x;
            cin >> x;
            if (x == 0) {
                ++z;
                continue;
            }
            prod *= x;
            if (x < m) {
                m = x;
            }
        }

        if (z > 1) {
            cout << "0" << endl;
        } else if (z == 1) {
            cout << prod << endl;
        } else {
            cout << (prod * (m + 1) / m) << endl;
        }
    }

    return 0;
}
