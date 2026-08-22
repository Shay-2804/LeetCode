class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string answer="";
       int i=0;
       while(i<word1.length() || i<word2.length()){
        if(i<word1.length()){
            answer+= word1[i];
        }
        if(i<word2.length()){
            answer+= word2[i];
        }
        i++;
       }
       return answer;
    }
};