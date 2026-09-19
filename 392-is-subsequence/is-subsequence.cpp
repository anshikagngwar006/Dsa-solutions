class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.length();
        int n=t.length();
        int prev=-1;
        int count=0;
        unordered_map<char,vector<int>>mp;
        for(int i=0;i<n;i++){
        mp[t[i]].push_back(i);
        }
        for(int i=0;i<m;i++){
            if(mp.find(s[i])==mp.end()){
                return false;
            }
            else if(mp.find(s[i])!=mp.end()){
               vector<int>indices=mp[s[i]];
               for(int j=0;j<indices.size();j++){
                if(indices[j]>prev){
                    count++;
                    prev=indices[j];
                    break;
                }/* isko directly upper bound function se bhi kar shkte the jaisevector<int> indices = mp[s[i]];

auto it = upper_bound(indices.begin(), indices.end(), prev);

if(it == indices.end()) {
    return false;
}

prev = *it;
count++;*/
            }

        }
        }
        if (count==m){
            return true;
        }
        return false;
    }
};