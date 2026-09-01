class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(int i=0;i<ransomNote.length();i++){
            mp[ransomNote[i]]++;
        }
        for(int j=0;j<magazine.length();j++){
            mp[magazine[j]]--;
        }
        bool construct=true;
        for(auto it:mp){
            if(it.second>0){
                construct=false;
            }
        }
        return construct;
        
    }
};