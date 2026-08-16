class Solution {
public:
    int firstUniqChar(string s) {
       int arr[27]={0};
       unordered_map<char,int>mpp;
       for(int i=0;i<s.length();i++){
         if(mpp.find(s[i]) == mpp.end()){
            arr[s[i]-'a'] = i;
        }
        mpp[s[i]]++;
       
       }
       int answer=s.length()+1;
        for(auto it:mpp){
            if(it.second == 1){
                answer=min(answer,arr[it.first - 'a']);
            }
        }
        if(answer == s.length()+1){
            return -1;
        }else{
            return answer;
        }
    }
};