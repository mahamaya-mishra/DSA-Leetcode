class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i-1]==nums[i])
            continue;
            int j = i + 1;
            int k = nums.size() - 1;
            while(j<k){

                if(nums[i]+ nums[j]+ nums[k]==0){
                    vector<int> v= {nums[i], nums[j], nums[k]};
                    ans.push_back(v);
                    j++;
                    k--;
                       while(j<k && nums[j-1]==nums[j]){
                    j++;
                }
                while(k>j && nums[k+1]==nums[k]){
                    k--;
                }

                }else if (nums[i]+ nums[j]+ nums[k]>0){
                    k--;

                }else{
                   j++;

                }
             


            }
        }

return ans;

    }
};