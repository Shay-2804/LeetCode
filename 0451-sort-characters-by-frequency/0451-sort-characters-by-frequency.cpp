class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(auto c:s){
            mpp[c]++;
        }
        vector<pair<char,int>>vec;
        for(auto it:mpp){
            vec.push_back({it.first,it.second});
        }

        auto cmp = [&](pair<char,int>&a,pair<char,int>&b){
            return a.second>b.second;
        };
        sort(vec.begin(),vec.end(),cmp);
        string ans="";
        for(auto [ch,fq] : vec){
            ans.append(fq,ch);
        }
        return ans;
    }
};