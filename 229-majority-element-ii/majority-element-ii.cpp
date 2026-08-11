class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int limit = n / 3;

        sort(nums.begin(), nums.end());

        int count = 1;
        vector<int> ans;

        for(int i = 0; i < nums.size() - 1; i++) {

            if(nums[i] == nums[i + 1]) {
                count++;
            }
            else if(count > limit) {
                ans.push_back(nums[i]);
                count = 1;
            }
            else {
                count = 1;
            }
        }
        if(count > limit) {
            ans.push_back(nums[n - 1]);
        }

        return ans;
    }
};