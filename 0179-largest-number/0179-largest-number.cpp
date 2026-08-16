class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>s;
        for(auto x:nums){
            s.push_back(to_string(x));
        }
        sort(s.begin(),s.end(),[](const string &a ,const string &b){
            return a+b > b+a;
        });
        string answer="";
        for(auto x : s){
            answer+= x;
        }
        if(s[0] == "0"){
            return "0";
        }else{
            return answer;
        }
    }
};