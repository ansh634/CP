class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int rows=arr.size();
        int cols=arr[0].size();
        vector<int>row(rows,0);
        vector<int>col(cols,0); 
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(arr[i][j]==0){
                    col[j]=1;
                    row[i]=1;
                }
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(row[i]==1 || col[j]==1){
                    arr[i][j]=0;
                }
            }
        }
    }
};