#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, key = 0;
        cin >> n;
        vector<char> arr(n);
        
        int count = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int i=0;
        while(i<n){
            if (arr[i] == '.') {
                i++;
            } else if (arr[i] == '@') {
                count++;
                i++;
            } else {
                if (i + 1 < n && arr[i + 1] == '*') {
                    break;
                } else {
                    i++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
