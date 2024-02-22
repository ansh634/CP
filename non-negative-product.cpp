#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,count =0;
        cin>>n;
        bool flag =0;
        vector<long long int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<0){
                count++;
            }
            if(arr[i]==0) flag=1;
        }
        if(count%2==0){
            cout<<"0"<<endl;
        }else if(flag==1){
            cout<<"0"<<endl;
        }else{
            cout<<count%2<<endl;
        }

    }
}