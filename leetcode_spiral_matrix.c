class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n,0));


        int row1=0,row2=n-1;
        int col1=0,col2=n-1;
        int limit=n*n;
        if(limit==1){
            matrix[0][0]=1;
            return matrix;
        }

        int cnt=1;
    while(cnt<=limit+1){

        for(int i=col1;i<=col2;i++){
                matrix[row1][i]=cnt;
                cout<<cnt;
                cnt++;
            }
          row1++;
          if(cnt>=limit+1){
              break;
          }
        for(int i=row1;i<=row2;i++){
                matrix[i][col2]=cnt;
                cout<<cnt;
                cnt++;
            }
         if(cnt>=limit+1){
              break;
          }
            col2--;
       for(int i=col2;i>=col1 ;i-- ){
                matrix[row2][i]=cnt;
                cout<<cnt;
                cnt++;
            }
         if(cnt>=limit+1){
              break;
          }
            row2--;
        for(int i=row2;i>=row1;i--){
                matrix[i][col1]=cnt;
                cout<<cnt;
            cnt++;
            }
         if(cnt>=limit+1){
              break;
          }
          col1++;
    }
        return matrix;
    }
};
