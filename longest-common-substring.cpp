//https://www.lintcode.com/problem/longest-common-substring/description

class Solution {
public:
    /**
     * @param A: A string
     * @param B: A string
     * @return: the length of the longest common substring.
     */
    int longestCommonSubstring(string &A, string &B) {
        // write your code here
        int m=A.size();
        int n=B.size();
        int arr[m+1][n+1];
        int maxi=0;
        
        for(int i=0;i<=m;i++)
            for(int j=0;j<=n;j++){
                if(i==0 || j==0 || A[i-1]!=B[j-1])
                    arr[i][j]=0;
                else{
                    arr[i][j]=arr[i-1][j-1]+1;
                    maxi=max(maxi,arr[i][j]);
                }
            }
        return maxi;
    }
};
