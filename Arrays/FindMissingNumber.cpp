class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int sumSecond = n * (n+1)/2 ;
        int ans = -1;
        for(int i = 0 ; i < n; i++){
            sum = sum + nums[i];

        }
        ans = sumSecond - sum;

        return ans;

        
    }
};