#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a;
    cin>>a;
    string b = to_string(a);
    if(a>=0){
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<endl;
    }
    }else{
       for(int i=1;i<b.size();i++){
        cout<<b[i]<<endl;
    } 
    }
}