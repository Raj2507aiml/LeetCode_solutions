class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = nums.size()/2;
        int count1 = 1;
        if(nums.size()==1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        for(int i = 1 ; i < nums.size();i++){
            if(nums[i]==nums[i-1]){
                count1++;
            }
            if(count1>count){
                return nums[i];
            }
        }
        return -1;
    }
};