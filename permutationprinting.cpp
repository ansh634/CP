#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Output the permutation
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}
