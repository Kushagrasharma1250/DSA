class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int prefix=1;
        int postfix=1;
        vector<int> adds(n,1);
        for(int i=0;i<n;i++){
            adds[i]=prefix;
            prefix*=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            adds[i]*=postfix;
            postfix*=nums[i];
        }
        return adds;
    }
};