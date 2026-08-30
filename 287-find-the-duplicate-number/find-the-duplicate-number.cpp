class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l=1;
        int h=nums.size()-1;
        int mid;
        int ans;
        while(l<=h){
            mid=l+(h-l)/2;
            int count=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<=mid){
                    count++;
                }
            }
                if(count>mid){
                    ans=mid;
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }

            }
            return ans;
        }
    };