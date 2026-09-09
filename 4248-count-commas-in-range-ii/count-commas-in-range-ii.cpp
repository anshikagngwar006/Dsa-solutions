class Solution {
public:
    long long countCommas(long long n) {
        long long count=0;
        if(n<1000){
            return 0;
        }
        else if(1000<=n &&n< 1000000){
            count=n-1000+1;
        }
        else if(n<1000000000){
            long long n1=999999-1000+1;
            long long n2=(n-1000000+1)*2;
            count=n1+n2;
            
        }
        else if(n<1000000000000){
            long long n1=999999-1000+1;
            long long n2=(999999999-1000000+1)*2;
            long long n3=(n-1000000000+1)*3;
            count=n1+n2+n3;
            
            

        }
        else if(n<1000000000000000){
            
            long long n1=999999-1000+1;
            long long n2=(999999999-1000000+1)*2;
            long long n3=(999999999999-1000000000+1)*3;
            long long n4=(n-1000000000000+1)*4;

            count=n1+n2+n3+n4;
        }
        else if(n<10000000000000000){
            long long n1=999999-1000+1;
            long long n2=(999999999-1000000+1)*2;
            long long n3=(999999999999-1000000000+1)*3;
            long long n4=(999999999999999-1000000000000+1)*4;
            long long n5=(n-1000000000000000+1)*5;

            count=n1+n2+n3+n4+n5;
        }
        return count;
    }
};
