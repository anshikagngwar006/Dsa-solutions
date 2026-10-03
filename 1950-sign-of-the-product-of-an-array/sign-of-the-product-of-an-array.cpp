class Solution {
public:
    int signfunc(int count){
        if(count%2==0){
            return 1;
        }
        else{
            return -1;
        }
    }
    int arraySign(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                count++;
            }
            else if(nums[i]==0){
                return 0;
            }
        }
      int value=signfunc(count);
      return value;
    }
};