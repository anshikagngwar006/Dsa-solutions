class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        for(int j=0;j<n;j++){
            ans.push_back(nums[j]); 
            ans.push_back(nums[j+n]);
        }
        return ans;
    }
};