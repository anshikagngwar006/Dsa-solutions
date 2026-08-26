class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
        return false;
    }
    if(x==0){
        return true;
    }
        string y=to_string(x);
        string ans;
        int nums;
        while(x>0){
        nums=x%10;
        ans.push_back(nums+'0');
        x=x/10;
    }
    if(ans==y){
        return true;
    }
    else{
        return false;
    }
    
    }
};