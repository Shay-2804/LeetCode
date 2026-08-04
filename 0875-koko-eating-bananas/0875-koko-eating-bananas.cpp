class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high = *max_element(piles.begin(),piles.end()),answer=high;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(canEat(piles,mid,h)){
                answer=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return answer;
    }
    bool canEat(vector<int>& piles,int k,int h){
        long long hours = 0;
        for(int p: piles){
           hours += (p+k-1) / k ; 
        }
        if(hours <= h){
            return true;
        }else{
            return false;
        }
    }
};