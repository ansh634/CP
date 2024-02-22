#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        vector<int> arr(a);
        for (int i = 0; i < a; i++) {
            arr[i] = i + 1;
        }

        // Sort in descending order
        sort(arr.begin(), arr.end(), greater<int>());

        for (int i = 0; i < b; i++) {
            swap(arr[i], arr[i + 1]);
        }

        for (int i = 0; i < a; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
