#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        bool flag=0;
        int count=0;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                count++;
            }
        }
        for(int i=0;i<n;i++){
            if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.'){
                flag=1;
            }
        }
        if(flag==1){
            cout<<"2"<<endl;
        }else{
            cout<<count<<endl;
        }
    }
}