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
        string word="";
        for(auto x:s ){
            if(isalpha(x) || (x>='0' && x<='9')){
                word+= (char)tolower(x);
            }
        }
        int l=0,r=word.length()-1;
        while(l<=r){
            if(word[l]!=word[r]){
                return check(word,l+1,r) || check(word,l,r-1);
            }else{
                r--;
                l++;
            }
        }
        return true;
    }
};