class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(auto c:s){
            mpp[c]++;
        }
        vector<vector<char>>bucket(s.length()+1);
        for(auto [ch,fq] : mpp){
            bucket[fq].push_back(ch);
        }
        string ans="";
        for(int fq=s.length();fq>=1;fq--){
            for(auto ch : bucket[fq]){
                ans.append(fq,ch);
            }
        }
        return ans;
    }
};