class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int ans = -1;
        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            for (int start = 0; start <= nums.size() - k; start++) {
                for (int j = start; j < start + k; j++) {
                    if (nums[j] == nums[i]) {
                        count++;
                        break;
                    }
                }
            }
            if (count == 1) {
                ans = max(ans, nums[i]);
            }
        }
        return ans;
    }
};