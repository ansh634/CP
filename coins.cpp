#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--){
        long long int n,k;
        cin>>n>>k;
        
        if(n%k==0 || (n-2)%k==0 || n%2==0 || (n-k)%2==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}