class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1=s1.length();
        int len2=s2.length();
        
        if(len2<len1) return false;

        vector<int>hash(26,0);
        vector<int>window(26,0);

        for(int i=0;i<len1;i++){
            hash[s1[i]-'a']++;
            window[s2[i]-'a']++;
        }

        if(hash==window) return true;

        for(int i=len1;i<len2;i++){
            window[s2[i-len1]-'a']--;
            window[s2[i]-'a']++;

            if(hash==window) return true;
        }

        return false;
    }
};