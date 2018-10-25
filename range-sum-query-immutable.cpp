//https://leetcode.com/problems/range-sum-query-immutable/

class NumArray {
private:
    vector<int> prev_sum;
public:
    NumArray(vector<int> nums) {
        int sum=0;
        prev_sum.push_back(sum);
        for(int x:nums){
            sum+=x;
            prev_sum.push_back(sum);
        }
            
    }
    
    int sumRange(int i, int j) {
        return prev_sum[j+1]-prev_sum[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
