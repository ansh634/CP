#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a;
    cin>>a;
    string b = to_string(a);
    if(a>=0){
        cout<<b[0]<<endl;
    }else{
        cout<<b[1]<<endl;
    }
}