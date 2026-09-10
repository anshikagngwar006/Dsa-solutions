class Solution {
public:
    int compress(vector<char>& chars) {
        string ans;
        int index=0;
        int l=0;
        int r=0;
        int count=0;
        while(r<chars.size()&&l<chars.size()){
            if(chars[l]==chars[r]){
                count++;
                r++;
            }
            else if(chars[l]!=chars[r]){
                ans.push_back(chars[l]);
                if(count>1){
                    ans=ans+to_string(count);
                }
                count=0;
                l=r;

            }
            
                
            }
                ans.push_back(chars[l]);
                if(count>1){
                    ans=ans+to_string(count);
                }
        for(int i=0;i< ans.length();i++){
        chars[i]=ans[i];
        index=i;
        }
        return index+1;

    }
};