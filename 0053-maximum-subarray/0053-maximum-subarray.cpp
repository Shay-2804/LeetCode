class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int present=nums[0] ,max_sum=nums[0];
        for(int i=1;i<nums.size();i++){
            present = max(nums[i],present+nums[i]);
            max_sum=max(present,max_sum);
        }
        return max_sum;
    }
};