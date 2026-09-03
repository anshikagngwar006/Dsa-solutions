class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count =0;
        int i;
        int j;
        for(i=0;i<stones.size();i++){
            for(j=0;j<jewels.size();j++){
                if(jewels[j]==stones[i]){
                    count++;
                }
            }
        }
       return count;
    }
};