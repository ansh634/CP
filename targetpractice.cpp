#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    
    cin>>t;
    while(t--){
        int sum=0,count1=0,count2=0,count3=0,count4=0,count5=0;
        char arr[10][10];
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(i==0||j==0||i==9||j==9){
                    if(arr[i][j]=='X'){
                        count1++;
                    }
                }else if(i==1||j==1||i==8||j==8){
                    if(arr[i][j]=='X'){
                        count2++;
                    }
                }
                else if(i==2||j==2||i==7||j==7){
                    if(arr[i][j]=='X'){
                        count3++;
                    }
                }else if(i==3||j==3||i==6||j==6){
                    if(arr[i][j]=='X'){
                        count4++;
                    }
                }else if(i==4||j==4||i==5||j==5){
                    if(arr[i][j]=='X'){
                        count5++;
                    }
                }
            }
        }
       sum= count1 +count2*2 +count3*3 +count4*4 +count5*5;
        cout<<sum<<endl;
   }

}