#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int arr[3], brr[3];
        int yes_count = 0, no_count= 0;
        int yes_countt = 0, no_countt = 0;
        for(int i = 0; i < 3; i++) {
            cin >> arr[i];
            if(arr[i] == 1) yes_count++;
            else no_count++;
        }
        for(int i = 0; i < 3; i++) {
            cin >> brr[i];
            if(brr[i] == 1) yes_countt++;
            else no_countt++;
        }
        if (yes_count == yes_countt && no_count == no_countt) {
            cout << "Pass" << endl;
        } else {
            cout << "Fail" << endl;
        }
    }

    return 0;
}
