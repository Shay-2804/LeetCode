class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[27]={0};
        for(int i=0;i<ransomNote.length();i++){
            arr[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.length();i++){
             arr[magazine[i]-'a']--;
        }
        for(int i=0;i<27;i++){
            if(arr[i]>0){
                return false;
            }
        }
        return true;
    }
};