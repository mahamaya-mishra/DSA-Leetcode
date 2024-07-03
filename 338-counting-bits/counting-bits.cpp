class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n+1, -1);
        int offset =1;
        dp[0]=0;
        for(int i=1; i<=n; i++){

         if(2*offset==i){
            offset=i;

         }
        dp[i]= 1+ dp[i-offset];

        }
        return dp;
    }
};