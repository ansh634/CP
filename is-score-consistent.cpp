#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;

    while (t--){
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(c<a || d<b){
            cout<<"IMPOSSIBLE"<<endl;
        }else{
            cout<<"POSSIBLE"<<endl;
        }
    }
        
    return 0;
}
