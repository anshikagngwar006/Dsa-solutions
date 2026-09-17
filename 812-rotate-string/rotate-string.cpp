class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) {
        return false;
    }

        string ans=s + s;
        string final;
        int left=0;
        for(int right=0;right<ans.length();right++){
            final.push_back(ans[right]);
            if(final.length()>goal.length()){
                final.erase(final.begin());
            }
            if(final==goal){
            return true;
        }
        }
        return false;
    }
};