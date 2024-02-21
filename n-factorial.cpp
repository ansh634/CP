#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int mul = 1;
    while(n!=0){
        mul =mul *n;
        n--;
    }
    cout<<mul<<endl;
}