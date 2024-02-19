#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        vector<char> lr(n);
        long long int mul = 1;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mul = (mul * arr[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> lr[i];
        }
        int i=0;
        while(n!=0){
            cout << mul%m << " ";

            if (lr[i] == 'L') {
                for (int i = 0; i < n; i++) {
                    mul = (mul * arr[i+1]) % m;
                }
            } else {
                n=n-1;
                for (int i = 0; i < n; i++) {
                    mul = (mul * arr[i]) % m;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
