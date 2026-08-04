class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long need = (long long)m*k;
        if(bloomDay.size()<need){
            return -1;
        }
        int low=*min_element(bloomDay.begin(),bloomDay.end()),high=*max_element(bloomDay.begin(),bloomDay.end()) ,answer=-1;
        while(low<=high){
            int mid=low + (high-low)/2;
            if(canMake(bloomDay,mid,m,k)){
                answer=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return answer;
    }

    bool canMake(vector<int>&bloomDay,int x,int y,int z){
        int counter=0,bouqets = 0;
        for(int b:bloomDay){
            if(b<=x){
                counter++;
                if(counter == z){
                    bouqets++;
                    counter=0;
                }
            }else{
                counter=0;
            }
        }
        return bouqets >= y;
    }
};