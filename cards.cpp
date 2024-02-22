#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,count=0,count1=0,count2=0,count3=0;
        cin >> n ;
        vector<int> arr(52);
        vector<int> arr1(52);
        for(int j=1;j<=n;j++){
            for(int i=0;i<13;i++){
            cin>>arr[i];
            cin>>arr1[i];
            if(arr[i]=='S' && arr1[i]!=i) cout<<arr[i]<<" "<<arr1[i];
            else if(arr[i]=='H' && arr1[i]!=i) cout<<arr[i]<<" "<<arr1[i];
            else if(arr[i]=='C' && arr1[i]!=i) cout<<arr[i]<<" "<<arr1[i];
            else if(arr[i]=='D' && arr1[i]!=i) cout<<arr[i]<<" "<<arr1[i];
        } 
        }
    }

    return 0;
}
