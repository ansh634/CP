#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    long long int t;
    cin >> t;

    while (t--) {
        long long int n;
        cin >> n;

        vector<long long int> v(n), a;

        for (long long int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // First element same for both arrays
        a.push_back(v[0]);

        for (long long int i = 1; i < n; i++) {
            if (v[i - 1] > v[i]) {
                a.push_back(v[i]);
                a.push_back(v[i]);
            } else {
                a.push_back(v[i]);
            }
        }

        cout << static_cast<long long int>(a.size()) << endl;

        for (long long int i = 0; i < static_cast<long long int>(a.size()); i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
