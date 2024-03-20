#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int flag =1;
        int gcd1 =0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            gcd1 = __gcd(arr[i],arr[j]);
            if(gcd1<=2) {
                flag=0;
                break;
            }
        }}
        if(flag==1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;

    }
}