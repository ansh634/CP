#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i] == "++X" || arr[i] =="X++"){
            count++;
        }else{
            count--;
        }
    }
    cout<<count<<endl;
}