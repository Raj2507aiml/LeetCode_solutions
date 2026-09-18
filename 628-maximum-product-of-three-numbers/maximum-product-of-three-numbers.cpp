class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int mult1 = nums[n-1]*nums[n-2]*nums[n-3];
        int mult2 = nums[0]*nums[1]*nums[n-1];
        // int ans = max(mult1,mult2)
        return max(mult1,mult2);
    }
};