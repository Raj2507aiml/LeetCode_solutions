class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count = nums.size()/3;
        int count1 = 1;
        vector<int> ans;
        sort(nums.begin(), nums.end());
        if(count1 > count){
            ans.push_back(nums[0]);
        }
        for(int i = 1 ; i< nums.size();i++){
            if(nums[i]==nums[i-1]){
                count1++;
            }
            else{
                count1 = 1;
            }
            if(count1 > count && (ans.empty() || ans.back() != nums[i])){
                    ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};