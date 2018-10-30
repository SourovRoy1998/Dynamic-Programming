//https://leetcode.com/problems/min-cost-climbing-stairs/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        if(n==1)
            return cost[0];
        vector<int> memoize(n+1);
        memoize[0]=0;
        memoize[1]=0;
        for(int i=2;i<=n;i++)
            memoize[i]=min(memoize[i-2]+cost[i-2],memoize[i-1]+cost[i-1]);
        return memoize[n];
    }
};
