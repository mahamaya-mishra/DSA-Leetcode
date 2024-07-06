class Solution {
public:
        int uniquePathsHelper(int m, int n, int i, int j, vector<vector<int>> &dp) {


            if(i==m-1 && j==n-1){
                return 1;
            }
            else if(i>=m || j>=n){
                return 0;
            }
            if(dp[i][j] != -1){
                return dp[i][j];
            }
return dp[i][j]=uniquePathsHelper(m, n, i+1, j, dp) + uniquePathsHelper(m,n,i, j+1, dp);
    
        }


    int uniquePaths(int m, int n) {
              vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
 int num=uniquePathsHelper(m, n, 0, 0, dp);
 cout<<num<<endl;
 cout<<dp[0][0];
        // if(m==1&&n==1)
        //     return num;
        // return dp[0][0];
        return num;
    }
};