#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int sec;
    cin>>sec;
    long long int h = (sec/3600); 
    long long int m = (sec -(3600*h))/60;
    long long int s = (sec -(3600*h)-(m*60));
    cout<<h<<":"<<m<<":"<<s<<endl;
}