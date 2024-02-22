#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,count =0;
        cin>>n;
        bool flag =0;
        vector<long long int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long sum=0;
        sort(arr.begin(),arr.end());
        for(int i =1;i<n;i++){
            sum = sum +arr[i];
        }
        cout<<sum<<endl;
    }
}