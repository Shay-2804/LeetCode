class Solution {
public:
    bool isPalindrome(string s) {
        string word="";
        for(auto x:s){
            if(isalpha(x) || (x>='0' && x<='9')){
            word+= (char)tolower(x);
            }
        }
        int l=0,r=word.length()-1;
        while(l<=r){
            if(word[l]!=word[r]){
                return false;
            }else{
                r--;
                l++;
            }
        }
        return true;
    }
};