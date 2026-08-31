class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int newcandy;
        int maxi=INT_MIN;
        for(int i=0;i<candies.size();i++){
        newcandy=candies[i]+extraCandies;
        
        for(int j=0;j<candies.size();j++){
            maxi=max(candies[j],maxi);
        }
        if(newcandy>=maxi){
            ans.push_back(true);
        }
        else{
            ans.push_back(false);
        }
        }
        return ans;
        
    }
};