
        class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i=0;
        int j=0;
        while(i<word1.length()&&j<word2.length()){
            ans.push_back(word1[i]);
            ans.push_back(word2[j]);
            i++;j++;
        }
        if(word1.length()>word2.length()){
           string t= word1.substr(i);
        ans.append(t);
        return ans;
    }
    else{
        string p= word2.substr(j);
        ans.append(p);
        return ans;
    }
    }
};
        