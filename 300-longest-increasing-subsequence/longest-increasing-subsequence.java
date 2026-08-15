class Solution {
    public int lengthOfLIS(int[] nums) {
        int n = nums.length;
        int[] arr = new int[n];

        int ans = 0;
        for(int ele : nums){

            int left = 0, right = ans;
            while(left != right){
                int mid = (left + right) / 2;
                if(arr[mid] < ele) left = mid + 1;
                else right = mid;

            }
            arr[left] = ele;
            if(left == ans) ans++;
        }    
        
        return ans;
    }
}