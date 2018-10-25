https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        
       for(int i=1;i<nums.size();i++)
           if(nums[i-1]>0)
               nums[i] += nums[i-1];
       int maxi = nums[0];
       for(int i=0; i<nums.size();i++)
               maxi = max(maxi,nums[i]);
           
        return maxi;
    }
};
