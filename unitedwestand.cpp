#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b,c;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxi = max(maxi,a[i]);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n-1;i++){
            if(a[i]==maxi){
                c.push_back(a[i]);
            }else{
                b.push_back(a[i]);
            }
        }
        if(b.size()==0 || c.size()==0){
            cout<<-1<<endl;
        }
        else {
            cout<<b.size()<<" "<<c.size()<<endl;
 
                for(int i=0;i<b.size();i++){
                     cout<<b[i]<<" ";
                        }
      cout<<endl;
        for(int i=0;i<c.size();i++){
            cout<<c[i]<<" ";
        }
 
        cout<<endl;
 }   

        

    }
}