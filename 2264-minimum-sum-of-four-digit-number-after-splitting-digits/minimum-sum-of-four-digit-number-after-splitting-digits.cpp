class Solution {
public:
    int minimumSum(int num) {
        vector<int>mar;
        while(num>0){
        int digit=num%10;
        mar.push_back(digit);
        num=num/10;
        }
        sort(mar.begin(),mar.end());
        int digit1=0; int digit2=0;
        digit1=digit1*10+mar[0];
        digit1=digit1*10+mar[3];
        digit2=digit2*10+mar[1];
        digit2=digit2*10+mar[2];
        return digit1+digit2;
    }
};