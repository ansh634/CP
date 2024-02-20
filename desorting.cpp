#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count =0,count1=1;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                count1++;
            }else if(arr[i]>arr[i+1]){
                count++;
            }
        }
        int num = INT_MAX;
        if(count>0){
            cout<<"0"<<endl;
        }else if(count1==n){
            cout<<"1"<<endl;
        }else{
            for(int i=0;i<n-1;i++){
            num = min(num,arr[i+1]-arr[i]);
            }
            cout<<num/2 +1<<endl;
        }
    }
}