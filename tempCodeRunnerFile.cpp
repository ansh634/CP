#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,count=0;
        cin >> n;
        vector<int> arr(n);
        vector<int> arr1(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        sort(arr.begin(),arr.end());
        sort(arr1.begin(),arr1.end());
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n;j++){
                if(arr[i]>arr1[j]) count++;
                if(arr[i]<arr1[j]) break;
            }
        }
        cout<<count<<endl;
            
    }
    return 0;
}
