class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n + 1, 0);
        vector<int> answer;
        for(int i = 0; i < n; i++) {
            ans[nums[i]] = 1;
        }
        for(int i = 1; i <= n; i++) {
            if(ans[i] == 0) {
                answer.push_back(i);
            }
        }
        return answer;
    }
};