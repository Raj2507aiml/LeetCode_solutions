class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        sort(nums.begin(),nums.end());
        for(int i = 1; i < nums.size(); i++) {
            // for(int j = i + 1; j < nums.size(); j++) {
            //     if(nums[i] == nums[j]) {
            //         ans = nums[i];
            //         return ans;
            //     }
            // }
            if(nums[i]==nums[i-1]){
                ans = nums[i];
                return ans;
            }
        }
        return -1;
    }
};