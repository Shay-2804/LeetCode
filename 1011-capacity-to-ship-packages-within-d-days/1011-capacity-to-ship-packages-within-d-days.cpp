class Solution {
public:
    int daysRequired(vector<int>&weights , int weight){
        int sum=0,count=1;
        for(auto x: weights){
            if(sum+x > weight){
                count++;
                sum=0;
            }
            sum+=x;
        }
        return count;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        int ans=high;

        while(low<=high){
            int mid=low+(high-low)/2;
            if(daysRequired(weights,mid)>days){
                low=mid+1;
            }else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};