class Solution {
public:
    int countCommas(int n) {
        int count;
        if(n<1000){
            return 0;
        }
        else if(n>=1000){
            count=n-1000+1;
        }
        return count;
    }
};