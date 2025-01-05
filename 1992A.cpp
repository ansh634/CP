#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    vector<int> v(3);
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int n=5;
    while(n--){
        auto mi = min_element(v.begin(),v.end());
        int mini = *mi;
        for(int i=0;i<3;i++){
            if(v[i]==mini){
                v[i]++;
                break;
            }
        }
    }
    int ans =1;
    for(int i=0;i<3;i++){
        ans = ans*v[i];
    }
    cout<<ans<<endl;
    }
}