class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int i=0;
        int j=1;
        while(i<=nums.size()-2&&j<=nums.size()-1){
            sum=sum+min(nums[i],nums[j]);
            i=i+2;
            j=j+2;
        }
        return sum;
    }
};