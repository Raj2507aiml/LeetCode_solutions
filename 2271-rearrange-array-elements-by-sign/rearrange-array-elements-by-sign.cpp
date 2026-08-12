class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int> ans;
        vector<int> ans1;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > 0) {
                ans.push_back(arr[i]);
            }
            else {
                ans1.push_back(arr[i]);
            }
        }
        int p = 0, n = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(i % 2 == 0) {
                arr[i] = ans[p];
                p++;
            }
            else {
                arr[i] = ans1[n];
                n++;
            }
        }
        return arr;
    }
};