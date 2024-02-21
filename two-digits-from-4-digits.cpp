#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a;
    cin>>a;
    string b = to_string(a);
    if(b[1]=='0'){
        cout<<b[2]<<endl;
    }else{
    cout<<b[1]<<b[2]<<endl;
}}