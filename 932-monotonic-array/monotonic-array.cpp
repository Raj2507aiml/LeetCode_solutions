class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        bool increasing = true;
        bool decreasing = true;
        for(int i = 1; i < arr.size();i++){
           if(arr[i]<arr[i-1]){
                increasing = false;
           }
           if(arr[i]>arr[i-1]){
                decreasing = false;
            }
        }
        return increasing||decreasing;
    }
};