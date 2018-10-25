//https://leetcode.com/problems/house-robber-ii/

class Solution {
public:
    int dp(vector<int>& nums) {
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
    
    
     int rob(vector<int>& nums) {
         vector<int> v1,v2;
         int n = nums.size();
        
         if(n==1)
             return nums[0];
         if(n==0)
            return 0;
         
         for(int i=0; i<(nums.size()-1);i++)
             v1.push_back(nums[i]);
         for(int i=1; i<(nums.size());i++)
             v2.push_back(nums[i]);
         
         return max(dp(v1),dp(v2));
     }
};
