#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b;
    cin>>a>>b;
    long long ans =1;
    for(long long int i=0;i<b;i++){
        ans = ans *a;
    }
    cout<<ans<<endl;
}