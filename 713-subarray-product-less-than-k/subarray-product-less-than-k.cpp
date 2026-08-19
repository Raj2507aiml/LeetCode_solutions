class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {
        int count = 0;
        int n = arr.size();
        for(int i = 0 ; i< n ; i++){
            int product = 1;
            for(int j = i ; j < n ; j++){
                product *= arr[j];
                if(product < k ){
                    count++;
                }else{
                    break;
                }
            }
        }
        return count;
    }
};