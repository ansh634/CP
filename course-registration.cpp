#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
    long long int n,m,k;
    cin >>n>>m>>k;
    if((m-k)<n){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
    }
    return 0;
}