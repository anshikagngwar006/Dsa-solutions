class Solution {
public:
      int ans(int divisor,int samllest, int greatest){
        if(samllest%divisor==0&&greatest%divisor==0){
            return divisor;
        }
        return ans(divisor-1,samllest,greatest);
      }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int samllest= nums[0];
       int greatest=nums[nums.size()-1];
       int divisor=nums[0];
        return ans(divisor,samllest,greatest);
    }
};