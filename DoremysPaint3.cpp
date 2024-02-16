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
        
        sort(arr.begin(), arr.end());
        
        bool isGood = true;
        for (int i = 1; i < n; i++) {
            if (arr[i] - arr[i - 1] != arr[1] - arr[0]) {
                isGood = false;
                break;
            }
        }
        
        if (isGood) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
