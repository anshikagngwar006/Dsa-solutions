class Solution {
public:
    string sortSentence(string s) {
        
        vector<string>v;
        stringstream ss(s);
        string word;
        while(ss >> word) {
    v.push_back(word);
}
vector<string>ans(v.size()+1);
    for(int i=0;i<v.size();i++){
        char lastword;
            lastword=v[i][v[i].length()-1];
            v[i].pop_back();
            ans[lastword-'0']=v[i];
            }
    string result;
for(int i = 1; i < ans.size(); i++){
    result += ans[i];
    if(i<ans.size()-1){
    result += " ";
    }
}
return result;
    }
};