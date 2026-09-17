class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s==goal){
            return true;
        }
        else{
            for(int i=0;i<s.length();i++){
                rotate(s.begin(),s.begin()+1,s.end());
 if (s==goal){
            return true;
                }
                    

            }
        }
        
        return false;
    }
};