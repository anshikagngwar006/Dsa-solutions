class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<string> token1;
        vector<string> token2;
        stringstream ss1(version1);
        stringstream ss2(version2);
        string token;
        while(getline(ss1,token,'.')){
            token1.push_back(token);
        }
        while(getline(ss2,token,'.')){
            token2.push_back(token);
        }
    int i=0;
    int j=0;
    while(i<token1.size()||j<token2.size()){
        int a;
        int b;
        if(i<token1.size()){
            a=stoi(token1[i]);
        } 
        else{
            a=0;
        }
         
         if(j<token2.size()){
            b=stoi(token2[j]);
        }
        else{
            b=0;
        }
         
        if(a>b){
            return 1;
        }
        else if(b>a){
            return -1;
        }
        else{
            i++;
            j++;
        }
    }
return 0;
    }
};