 class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans;
        int p = 0;

        // Empty vector
        if(strs.empty())
            return ans;

        while(p < strs[0].length()) {

            bool found = true;

            for(int j = 1; j < strs.size(); j++) {

                // Agar current string mein p index hi nahi hai
                // OR character match nahi kar raha
                if(p >= strs[j].length() || 
                   strs[j][p] != strs[0][p]) {

                    found = false;
                    break;
                }
            }

            if(found == true) {
                ans.push_back(strs[0][p]);
                p++;
            }
            else {
                break;
            }
        }

        return ans;
    }
};
