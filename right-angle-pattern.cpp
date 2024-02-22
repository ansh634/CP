#include<bits/stdc++.h>
using namespace std;

int main() {
        long long int n;
        cin >> n;
        
        int count = 1;
        for(int i = 1; i <= n; i++) {
            for(int k = 1; k <= i; k++) {
                cout << count << " ";
                count++;
            }
            cout << endl;
        }
    

    return 0;
}
