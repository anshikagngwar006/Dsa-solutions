class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
       int i=0;
       int j=0;
       while(i<nums1.size()&& j<nums2.size()){
        if(nums1[i]>nums2[j]){
            nums3.push_back(nums2[j]);
            j++;
        }
       else if(nums1[i]<nums2[j]){
            nums3.push_back(nums1[i]);
            i++;
        }
        else if(nums1[i]==nums2[j]){
            nums3.push_back(nums1[i]);
            nums3.push_back(nums2[j]);
            i++;
            j++;
        }
       }
        while(i<nums1.size()){
            nums3.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            nums3.push_back(nums2[j]);
            j++;
        }
       if(nums3.size()%2!=0){
        return  nums3[((nums3.size()+1)/2)-1];
       }
       else if(nums3.size()%2==0){
           return (nums3[(nums3.size()/2)-1]+nums3[(nums3.size()/2)])/2.0;

    }
    return 0;
    }
};