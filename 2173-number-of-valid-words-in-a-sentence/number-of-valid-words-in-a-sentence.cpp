class Solution {
public:
    int countValidWords(string sentence) {
        
        stringstream ss(sentence);
        string word;
        int count=0;
        while(ss>>word){
            unordered_map<char,int>mp;
         bool found=true;

            for(int i=0;i<word.length();i++){
                if(word[i]==','||word[i]=='.'||word[i]=='!'||word[i]=='-'){
                   mp[word[i]]++; 
                }
            }
            for(auto it:mp){
                if(it.second>1){
                    found=false;
                }
            }
            for(int i=0;i<word.length();i++){
                if(isdigit(word[i])){
                    found=false;
                    break;
                }
                else if((word[i]==','||word[i]=='.'||word[i]=='!'||word[i]==' ')&&(i<word.length()-1)){
                    found =false;
                    break;

                }
                else if(word[i]=='-'){
                    if((i==0)||(i==word.length()-1)||(!islower(word[i-1]))||(!islower(word[i+1]))){
                        found=false;
                        break;
                    }

                }


            }
            if(found==true){
                count++;
            }

        }
        
        return count;
        
    }
};