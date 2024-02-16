#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,count=0;
        cin>>n>>m;
        string x;
        string s;
        cin>>x;
        cin>>s;
        if(x.find(s) != string::npos){
            cout<<"0"<<endl;
        }else{
        while(x.length()*s.length()<=1000){
            x=x+x;
            count++;
            if (x.find(s) != string::npos){
                break;
            }
        }
        if(x.find(s) != string::npos){
            cout<<count<<endl;
        }else{
        cout<<"-1"<<endl;
    }}}
}