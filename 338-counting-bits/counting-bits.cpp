class Solution {
public:

  int hammingWeight(int n) {

int res=0;

        while(n){
res+= n%2;
n=n>>1;
        }
        return res;
    }
    vector<int> countBits(int n) {
        if (n == 0) {
            return {0};
        }
        
        vector<int> ans= countBits(n-1);
        int a= hammingWeight(n);
        ans.push_back(a);
        return ans;

        
    }
};