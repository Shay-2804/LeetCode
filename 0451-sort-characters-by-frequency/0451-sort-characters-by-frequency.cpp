class Solution {
public:
    string frequencySort(string s) {
        vector<int>vec(128,0);
        for(auto c:s){
            vec[c]++;
        }
        auto cmp = [&](char a,char b){
            if(vec[a] == vec[b]){
                return a<b;
            }
            return vec[a]>vec[b];
        };
        sort(s.begin(),s.end(),cmp);
        return s;
    }
};