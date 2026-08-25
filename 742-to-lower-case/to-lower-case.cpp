class Solution {
public:
    string toLowerCase(string s) {
        for(int j=0;j<s.length();j++){
            if(isupper(s[j])){
            s[j]=tolower(s[j]);
            }
        }
        return s;
    }
};