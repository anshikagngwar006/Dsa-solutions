class Solution {
public:
    int lengthOfLastWord(string s) {
        int j=s.length()-1;
    long long count=0;
        while(s[j]==' '){
            j--;
        } 
        while(j>=0){
            if(s[j]!=' '){
                count++;
                j--;
            }
            else{
                return count;
            }
        }
        
        return count;
    }
       
};