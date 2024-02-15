#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int color = (k - 1) / 2 + 1;

        cout << color << endl;
    }

    return 0;
}
