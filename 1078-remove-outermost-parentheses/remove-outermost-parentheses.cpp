class Solution {
public:
    string removeOuterParentheses(string s) {
        string final="";
        int count=0;
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                count=count+1;
            }
            else if(s[i]==')'){
                count=count-1;
            }
            ans.push_back(s[i]);
            if(count==0){
         if (!ans.empty()) {
    ans.erase(ans.begin()); 
}
            
                ans.pop_back();
                final.append(ans);
                ans="";
            }
        }
    return final;  
    }
};