class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int length1=word1.length();
        int length2=word2.length();
        int length=0,max_length=0;
        bool c=false;
        if(length1==length2){
            length=length1;
            c=true;
        }else{
            length=min(length1,length2);
            max_length=max(length1,length2);
        }
        string answer="";
        for(int i=0;i<length;i++){
            answer+= word1[i];
            answer+= word2[i];
        }
        if(c){
            return answer;
        }else{
            string x = word1.substr(length,max_length-length);
            string y = word2.substr(length,max_length-length);
            cout << x << y ;
            answer.append(x);
            answer.append(y);
            return answer;
        }
    }
};