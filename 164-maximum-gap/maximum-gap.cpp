class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maximum = 0;
        int ans;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                ans = nums[i] - nums[i+1];
            }else{
                ans = nums[i+1] - nums[i];
            }
            maximum = max(maximum , ans);
        }
        return maximum;
    }
};