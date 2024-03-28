#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    int count =0;
    int i=0,n=a.size(),j=n-1;
    while(i<n && j>=0){
        if(a[i]==b[j]) count++;
        i++; j--;
    }
    if(count==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}