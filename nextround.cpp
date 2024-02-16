#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
    int count=0;
    vector<int> arr(n);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int num = arr[k];
    if(num==0){
        for(int i=1;i<=n;i++){
        if(arr[i]>0){
            count++;
        }
    }
    
    cout<<count<<endl;
    }else{
    for(int i=1;i<=n;i++){
        if(arr[i]>=num){
            count++;
        }
    }
    
    cout<<count<<endl;
    }
}