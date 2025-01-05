#include <bits/stdc++.h>
using namespace std;

int main() {
        long long int n,one=0;
        cin>>n;
        vector<long long> arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0) one++;
        }
            if(one==n) cout<<"Easy"<<endl;
            else cout<<"Hard"<<endl;
    }
