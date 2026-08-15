class Solution {
public:
    bool isSubsequence(string s, string t) {
        stringstream ss(t);
        char c;
        int counter=0;
        while(ss >> c){
            if(c==s[counter] && counter <s.length() ){
                counter++;
            }
        }
        if(counter == s.length()){
            return true;
        }else{
            return false;
        }
    }
};