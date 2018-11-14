//https://leetcode.com/problems/longest-palindromic-subsequence/

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n=s.length();
        int memoize[n][n];
        
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++){
                if(i==j)
                    memoize[i][j]=1;
                else
                    memoize[i][j]=0;
            }
        
        for(int i=1;i<n;i++){
            int k=0;
            while(i+k<n){
                if(s[k]==s[i+k])
                    memoize[k][i+k]=memoize[k+1][i+k-1]+2;
                else
                    memoize[k][i+k]=max(memoize[k][i+k-1],memoize[k+1][i+k]);
                k++;
            }
                
        }
        
        /*
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<memoize[i][j]<<" ";
            cout<<endl;
            }
            */
        
        return memoize[0][n-1];
    }
};
