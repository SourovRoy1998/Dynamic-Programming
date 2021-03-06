//https://leetcode.com/problems/house-robber/

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if(n==1)
            return nums[0];
        if(n==0)
            return 0;
        
        for(int i=1;i<nums.size();i++){
            if(i==1)
                nums[i] = max(nums[i-1],nums[i]);
            else
                nums[i] = max(nums[i-1],nums[i]+nums[i-2]);
        }
        
        return nums[n-1];
    }
};
