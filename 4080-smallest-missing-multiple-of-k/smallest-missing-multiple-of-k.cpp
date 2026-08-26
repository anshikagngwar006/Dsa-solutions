class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans;
        for(int i=1;i<=101;i++){
            bool found=false;
             ans=k*i;
     for(int j=0;j<nums.size();j++){
        if(nums[j]==ans){
            found=true;
               break;}
                    }
     if(found==false){
     return ans;
     }

    }
    return 0;
    }
};