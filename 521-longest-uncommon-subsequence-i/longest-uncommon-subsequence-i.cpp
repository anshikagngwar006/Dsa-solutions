class Solution {
public:
    int findLUSlength(string a, string b) {
        int m=a.length();
        int n=b.length();
        int i=0;
        int j=0;
        if((m>n)||(n>m)){
            return max(m,n);
        }
        else{
        while(i<m&&j<n){
            if(a[i]!=b[j]){
                return m;
            }
    
    else{
        i++;j++;
    }
        }
        }
    return -1;
        
    }
};