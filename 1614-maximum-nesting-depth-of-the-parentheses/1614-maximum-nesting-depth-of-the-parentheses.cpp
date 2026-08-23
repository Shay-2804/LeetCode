class Solution {
public:
    int maxDepth(string s) {
        stringstream ss(s);
        char c;
        int counter=0,answer=-1;
        while(ss >> c){
            if(c=='('){
                counter++;
            }else if(c==')'){
                counter--;
            }
            answer=max(answer,counter);
        }
        return answer;
    }
};