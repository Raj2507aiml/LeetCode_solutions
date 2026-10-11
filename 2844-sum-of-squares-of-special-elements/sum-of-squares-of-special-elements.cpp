class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sqr ;
        int n = nums.size();
        int sumofsqr = 0;
        for(int i = 1 ; i <= nums.size();i++){
            if(n%i==0){
                sqr =pow(nums[i-1] ,2);
                sumofsqr += sqr; 
            }
        }
        return sumofsqr;
    }
};