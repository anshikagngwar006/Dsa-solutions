class Solution {
public:
    int countSegments(string s) {
        vector<string> word;
        stringstream ss(s);
        string temp;
        while(ss>>temp){
            word.push_back(temp);
        }
        return word.size();
    }
};