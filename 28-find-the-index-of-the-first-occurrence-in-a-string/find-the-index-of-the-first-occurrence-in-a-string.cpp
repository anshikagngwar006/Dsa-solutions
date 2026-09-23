class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        while(i<haystack.size()){
              if(needle[0]==haystack[i]){
              int index=i;
                int j=1;
                i++;
                   while(j<needle.size()&&i<haystack.size()){
                      if(needle[j]==haystack[i]){
                          j++;
                          i++;
                      }
                      else{
                        break;
                      }
                   }
                   if(j==needle.size()){
                    return index;
                   }
                   i=index+1;      
             }
             else{
                i++;
             }
        }
       return -1;            
    }
};