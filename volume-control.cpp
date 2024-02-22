#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
    long long int x,y;
    cin >>x>>y;
    if(x<y){
        cout<<y-x<<endl;
    }else{
        cout<<x-y<<endl;
    }
    }
    return 0;
}