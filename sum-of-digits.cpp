#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a;
    cin>>a;
    string b = to_string(a);
    long long int sum = b[0]-'0'+b[3]-'0';
    cout<<sum<<endl;
}