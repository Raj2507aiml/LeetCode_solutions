class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count1 = 0;
        int maxcount = 0;
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i]==1){
                count1++;
                maxcount = max(maxcount , count1);
            }else{
                count1 = 0;
            }
        }
        return maxcount;
    }
};