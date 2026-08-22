class Solution {
public:
    string largestOddNumber(string num) {
        int index=num.length()-1;
        while(index>=0){
            if((num[index]-'0')%2!=0){
                return num.substr(0,index+1);
            }else{
                index--;
            }
        }
        return "";
    }
};