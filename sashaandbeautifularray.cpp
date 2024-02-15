#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            sum=sum+(arr[i+1]-arr[i]);
        }
        cout<<sum<<endl;
    }
}