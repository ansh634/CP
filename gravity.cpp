#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    }
    return 0;
}