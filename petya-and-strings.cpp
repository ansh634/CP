#include <bits/stdc++.h>
using namespace std;

int main() {

        string a, b;
        cin >> a >> b;
        for (char &c : a) {
        c = toupper(c);  // Convert each character to uppercase
        }
        for (char &c : b) {
        c = toupper(c);  // Convert each character to uppercase
        }
        for(int i=0;i<a.size();i++){
            if(a[i]<b[i]){ 
                cout<<"-1"<<endl;
                return 0;
            }
            else if(a[i]>b[i]) {
            cout<<"1"<<endl;
            return 0;
            }
            
        }
        cout<<"0"<<endl;

    return 0;
}