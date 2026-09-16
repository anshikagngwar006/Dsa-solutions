class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int count=0;
        int maxi=0;
        char maxchar;
        for(auto it:mp){
            if(it.second%2!=0){
                if(it.second>maxi){
                    maxi=it.second;
                    maxchar=it.first;
                }
            }
            
        }
        count=count+maxi;
            for(auto it:mp){
                if(it.second%2==0){
                    count=count+it.second;
                }
                else if(it.second!=maxi&&it.second%2!=0){
                    count=count+(it.second-1);
                }
                else if(it.second==maxi&&it.first!=maxchar){
                    count=count+(it.second-1);
                }
            }
        return count;
    }
};