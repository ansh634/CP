#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int k,n,w;
    cin>>k>>n>>w;
    int total =0;
    for(int i=1;i<=w;i++){
        total+= i*k;
    }
    if((total-n)<0) cout<<0<<endl;
    else cout<<total-n<<endl;
}