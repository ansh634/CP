#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5],count=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                if((i==0)) count += 2;
                else if((i==1)) count += 1;
                else if((i==2)) count += 0;
                else if((i==3)) count += 1;
                else if((i==4)) count += 2;
                if((j==0)) count += 2;
                else if((j==1)) count += 1;
                else if((j==2)) count += 0;
                else if((j==3)) count += 1;
                else if((j==4)) count += 2;
            }
        }
    }
    cout<<count<<endl;
}