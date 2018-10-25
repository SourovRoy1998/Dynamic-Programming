//https://leetcode.com/problems/unique-paths-ii/

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        int memoize[m][n];
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                if(obstacleGrid[i][j]==1)
                    memoize[i][j]=0;
                else if(i==0 && j==0){
                    if(obstacleGrid[0][0])
                        memoize[i][j]=0;
                    else
                        memoize[i][j]=1;
                }
                else if(i==0)
                    memoize[i][j]=memoize[i][j-1];
                else if(j==0)
                    memoize[i][j]=memoize[i-1][j];
                else 
                    memoize[i][j]=memoize[i-1][j]+memoize[i][j-1];
            }
        return memoize[m-1][n-1];
        
    }
};
