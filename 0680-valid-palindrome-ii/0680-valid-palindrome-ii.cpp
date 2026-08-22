class Solution {
public:

    bool check(string s ,int left , int right){
        while(left<=right){
            if(s[left]!=s[right]){
                return false;
            }else{
                left++;
                right--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0,r=s.length()-1;
        while(l<=r){
            if(s[l]!=s[r]){
                return check(s,l+1,r) || check(s,l,r-1);
            }else{
                r--;
                l++;
            }
        }
        return true;
    }
};