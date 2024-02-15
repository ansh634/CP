#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int i=10,n;
        cin>>n;
        while(i!=0){
            if(n%3==0){
                cout<<"Second";
            }else if((n+ 1)%3==0  || (n- 1)%3==0){
            cout<<"First"<<endl;
        }
        else if((n+ 2)%3 == 0 || (n- 2)%3==0){
            cout<<"Second"<<endl;
        }
        }
    }
}