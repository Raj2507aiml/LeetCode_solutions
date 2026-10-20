class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> d;
        int n = nums.size();
        for (int i = 0; i <k; i++){
            while(!d.empty() && nums[i]>nums[d.back()]){
                d.pop_back();
            }
            d.push_back(i);
        }
        ans.push_back(nums[d.front()]);
        for(int i  = k ; i < n ; i++){
            while(!d.empty() && nums[i] > nums[d.back()]){
                d.pop_back();
            }
            d.push_back(i);
            if(d.front() <= i - k){
                d.pop_front();
            }
            ans.push_back(nums[d.front()]);
        }
    return ans;
    }
};