#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) 
          cin>>arr[i];
        vector<int> pre(n);
        pre[0]=arr[0];
        for(int i=1;i<n;i++) 
          pre[i]=pre[i-1]+arr[i];
        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            int l,r;
            cin>>l>>r;
            cout<<pre[r]- pre[l-1]<<endl;
        }

    }
}