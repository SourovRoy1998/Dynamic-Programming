//https://leetcode.com/problems/maximum-product-subarray/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        long long int running_max;
        long long int curr_max=nums[0];
        
        if(n==1)
            return nums[0];
        
        for(int i=1;i<n;i++){
            running_max*=nums[i];
            ma
        }
        
        
    }
};
