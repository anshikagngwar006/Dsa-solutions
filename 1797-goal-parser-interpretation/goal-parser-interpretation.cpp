class Solution {
public:
    string interpret(string command) {
        string ans;
        int i=0;
        while(i<command.length()){
            if(command[i]=='G'){
                ans.push_back('G');
                i++;
            }
            else if(command[i]=='('){
                if(command[i+1]==')'){
                i=i+2;
                ans.push_back('o');
                }
                else if(command[i+1]=='a'){
                    ans.push_back('a');
                    ans.push_back('l');
                    i=i+4;
                }
            }
            

        }
        return ans;
    }
};