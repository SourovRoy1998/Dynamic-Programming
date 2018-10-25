//https://leetcode.com/problems/longest-increasing-subsequence/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.empty())
            return 0;
        
        int maxi=1;
        vector<int> vec(nums.size());
        
        vec[0]=1;
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j])
                    vec[i]=max(vec[j],vec[i]);
            }
            vec[i]++;
            maxi=max(maxi,vec[i]);
    }
        
        
        return maxi;
            
    }
};
