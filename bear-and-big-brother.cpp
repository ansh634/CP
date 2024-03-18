#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a,b,count=0;
    cin>>a>>b;
    while(true){
        a=a*3;
        b=b*2;
        count++;
        if(a>b) break;
    }
    cout<<count<<endl;
    return 0;
}
