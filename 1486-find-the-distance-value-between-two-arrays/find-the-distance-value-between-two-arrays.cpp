class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        bool ans;
        for(int i=0;i<arr1.size();i++){
            int j=0;
            while(j<arr2.size()){
                if(abs(arr1[i]-arr2[j])<=d){
                    ans=false;
                    break;
                }
                else if(abs(arr1[i]-arr2[j])>d){
                    j++;
                    ans=true;
                }
            }
            if(ans==true){
            count++;
        }
        }
        return count;
    }
};