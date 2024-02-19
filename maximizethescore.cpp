#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(2*n);
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        sort(arr.rbegin(), arr.rend());
        long long int score =0;
        for(int i=0;i<(2*n)-1;i++){
            score = score + min(arr[i],arr[i+1]);
            i++;
        }
        cout<<score<<endl;
    }
    return 0;
}