#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int l,r,count =0;
        cin>>l>>r;
        for(int i=l;i<=r;i++){
            int n = i%10;
            if(n==2 || n==3 || n==9) count++;
        }
        cout<<count<<endl;

    }
}