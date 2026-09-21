class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string final;
        string word;
        while(ss>>word){
            string temp;
         for(int i=word.length()-1;i>=0;i--){
                temp.push_back(word[i]);
            }
           if(!final.empty()){
          final.push_back(' ');
        }
         final.append(temp);
        }
        return final;
    }
};