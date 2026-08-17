class Solution {
public:
    string countAndSay(int n) {
        string res="1";
        helper(1,n,res);
        return res;
    }

    void helper(int r,int n,string& res){
        if(r>=n){
            return; // base case
        }
        string prev = res;
        res="";
        int l=0,count=0;
        for(int r=0;r<prev.length();r++){
            if(prev[l]!=prev[r]){
                res+= to_string(count) + prev[l];
                l=r;
                count=1;
            }else{
                count++;
            }
        }
        res+= to_string(count) + prev[l];
        return helper(r+1,n,res);
    }
};