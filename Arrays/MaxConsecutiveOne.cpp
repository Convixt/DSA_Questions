class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int countNew = 0;
        int count = 0;
        for(int i = 0 ; i<n; i++){
            if(nums[i] == 1){
                count++ ;
            }
            else{
                countNew = max(count , countNew);
                count = 0;
            }

        }
        return max(countNew , count) ;
        
    }
};