class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start = nums[0];
        int end = nums[nums.size()-1];
        for(int i = min(start, end); i >= 1; i--){
            if(start%i==0 && end%i==0){
                return i;
            }
        }
        return 1;
    }
};