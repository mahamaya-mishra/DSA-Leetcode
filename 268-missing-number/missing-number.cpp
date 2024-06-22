class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.size() ==0){
            return 0;
        }
        int s= 0;
        for(int i=0; i<nums.size(); i++){
s+= nums[i];
        }
        int n =nums.size();
        int s2= (n*(n+1))/2;
        return s2-s;
    }
};