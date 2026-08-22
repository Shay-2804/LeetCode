class Solution {
public:
    bool isVowel(char c ){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }else{
            return false;
        }
    }
    string reverseVowels(string s) {
        int l=0,r=s.length()-1;
        bool a=false,b=false;
        while(l<r){
            if(a && b){
                swap(s[l],s[r]);
                a=false;
                b=false;
                l++;
                r--;
            }
            if(isVowel(tolower(s[l]))){
                a=true;
            }else{
                l++;
            }
            if(isVowel(tolower(s[r]))){
                b=true;
            }else{
                r--;
            }
        }
        return s;
    }
};