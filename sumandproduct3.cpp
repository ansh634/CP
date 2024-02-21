#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,sum=0,mul=1;
    cin>>a;
    string b = to_string(a);
    for(int i=0;i<b.size();i++){
        int digit = b[i] - '0';  
        sum = sum + digit;
        mul = mul * digit;
    }
    cout<<sum<<" "<<mul<<endl;
}