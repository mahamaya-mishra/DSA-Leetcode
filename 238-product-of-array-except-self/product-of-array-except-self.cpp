class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
if(nums.size()==2){
    ans={nums[1], nums[0]};
    return ans;
}
int a=1;
for(int i=1; i<nums.size(); i++){
    a*=nums[i-1];
ans[i]=a;
}

// for(int i=1; i<nums.size(); i++){
//     a*=nums[i-1];
// ans.push_back(a);
// }
int b=1;
for(int i=nums.size()-2; i>=0; i--){
b*= nums[i+1];
ans[i]=b* ans[i];
}

return ans;
    }
};