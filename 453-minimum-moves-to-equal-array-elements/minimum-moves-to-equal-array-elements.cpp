class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int mini = nums[0];
        int sum = 0;
        for(int i =0;i<n ; i++){
            mini = min(mini,nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            sum = sum + (nums[i]-mini);
        }
        return sum;
    }
};