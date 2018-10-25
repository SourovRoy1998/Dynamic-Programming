//https://leetcode.com/problems/edit-distance/

class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        int memoize[m+1][n+1];
        for(int i=0;i<=m;i++)
            for(int j=0;j<=n;j++){
                if(i==0 && j==0)
                    memoize[i][j]=0;
                else if(i==0)
                    memoize[i][j]=memoize[i][j-1]+1;
                else if(j==0)
                    memoize[i][j]=memoize[i-1][j]+1;
                else{
                    if(word1[i-1]==word2[j-1])
                        memoize[i][j]=memoize[i-1][j-1];
                    else
                        memoize[i][j]=min(memoize[i-1][j-1],min(memoize[i][j-1],memoize[i-1][j]))+1;
                }
            }
        
        /*for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++)
                cout<<memoize[i][j]<<" ";
            cout<<endl;
        }
        */
        
        return memoize[m][n];
    }
    
};
