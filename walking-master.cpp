#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>d || c-a>d-b)
        cout<<-1<<endl;
    else cout<<a-c+2*(d-b)<<endl;
    }
}
