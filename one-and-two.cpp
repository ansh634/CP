#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--){
        long long int n,one=0,two=0,half=0;
        cin>>n;
        vector<long long> arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1) one++;
            else two++;
        }
        int flag=0,ans=0;
        for(long long i=0;i<n;i++){
            if(arr[i]==2) half++;
            if(half*2==two){
                flag=1;
                ans = i+1;
                break;
            }}
            if(flag==0) cout<<-1<<endl;
            else cout<<ans<<endl;
        

    }
}