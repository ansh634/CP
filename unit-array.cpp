#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0,sum=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==(-1)) count++;
            sum+=arr[i];
        }
        if(sum>=0 && count%2==0) cout<<"0"<<endl;
        else if(count%2!=0){ 
            
            cout<<"1"<<endl;
        }
        else{
            for(int i=1; ;i++){
                if(sum>=0){ 
                    cout<<i<<endl;
                    break;
                }
                sum+=1;
            }
        }
    }
}