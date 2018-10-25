//https://leetcode.com/problems/maximal-square/

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.empty())
            return 0;
        
        
        
        int maxi=0;
        int m=matrix.size();
        int n=matrix[0].size();
        int arr[m+1][n+1]={};
        
        for(int i=1;i<m+1;i++)
            for(int j=1;j<n+1;j++)
                if(matrix[i-1][j-1]=='1'){
                    arr[i][j]=min(arr[i-1][j],min(arr[i][j-1],arr[i-1][j-1]))+1;
                    maxi=max(maxi,arr[i][j]);
                }
        return maxi*maxi;
        
    }
};
