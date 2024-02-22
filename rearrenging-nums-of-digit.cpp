#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int d;
        string n;
        bool flag=0;
        cin>>d>>n;
        for(int i=0;i<d;i++){
            if(n[i]=='0'||n[i]=='5') flag=1;
        }
        if(flag==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}