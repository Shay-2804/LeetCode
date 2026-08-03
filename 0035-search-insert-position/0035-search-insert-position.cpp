class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int answer=-1,m;
        while(l<=r){
             m=(l+r)/2;
            if(nums[m]>target){
                r=m-1;
            }else if(nums[m]<target){
                l=m+1;
            }else if(nums[m]==target){
                answer=m;
                break;
            }
        }
        if(answer==-1 && target>nums[m]){
            answer=m+1;
        }else if(answer==-1 && target <nums[m]){
            answer=m;
        }
        return answer;
    }
};