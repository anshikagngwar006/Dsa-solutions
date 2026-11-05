class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>num;
        while(left<=right){
            bool ans=true;
            int cur=left;
            while(cur>0){
                int digit=cur%10;
                if(digit==0||left%digit!=0){
                    ans=false;
                    break;
                }
                cur=cur/10; 
            }
            if(ans){
                num.push_back(left);
            }
            left++;
        }
        return num;
    }
};