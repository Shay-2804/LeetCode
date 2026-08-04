class Solution {
public:

    int lower_occurence(vector<int>&nums,int target){
        int low=0,high=nums.size()-1,ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }

    int higher_occurence(vector<int>&nums,int target){
        int low=0,high=nums.size()-1,ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>answer;
        answer.push_back(lower_occurence(nums,target));
        answer.push_back(higher_occurence(nums,target));
        return answer;
    }
    
};