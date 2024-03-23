#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,k;
    cin>>n>>k;
    string s = to_string(n);
    
    for(int i=0;i<k;i++){
        int a = s.size();
        if(s.size()>1){
            if(s[a-1]!='0') {
                n= n-1;
                s = to_string(n);
                }
            else {
                n=n/10;
                s = to_string(n);}
        }else{
            n = n-1;
        }
    }
    cout<<n<<endl;
}