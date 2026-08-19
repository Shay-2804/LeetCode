class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>answer;
        unordered_map<string,vector<string>>mpp;
        for(auto x:strs){
            string temp=x;
            sort(x.begin(),x.end());
            mpp[x].push_back(temp);
        }
        for(auto it:mpp){
            answer.push_back(it.second);
        }
        return answer;
    }
};