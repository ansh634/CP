#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        long long int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
        }
        sum%2==0 ? cout<<"Yes"<<endl : cout<<"No"<<endl;
    }
    return 0;
}