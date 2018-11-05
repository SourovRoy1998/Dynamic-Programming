//https://leetcode.com/problems/perfect-squares/

class Solution {
public:
    int numSquares(int n) {
        int arr[n+1];
        for(int i=0;i<=n;i++)
            arr[i]=i;
        
        for(int i=0;i<=n;i++)
            for(int j=1;i+j*j<=n;j++)
                arr[i+j*j]=min(arr[i]+1,arr[i+j*j]);
        
        return arr[n];
        
    }
};
