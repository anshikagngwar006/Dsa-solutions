class Solution {
public:
int getgcd(int S,int G){
    if(G==0){
        return S;
    }
    return getgcd(G,S%G);
}
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int S=nums[0];
        int G=nums[nums.size()-1];
        return getgcd(S,G);
    }
};