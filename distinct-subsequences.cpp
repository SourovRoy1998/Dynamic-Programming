//https://leetcode.com/problems/distinct-subsequences/

class Solution {
public:
    int numDistinct(string s, string t) {
        int m=s.size();
        int n=t.size();
        int arr[m+1][n+1];
        
        for(int i=0;i<=m;i++)
            for(int j=0;j<=n;j++){
                if(j==0)
                    arr[i][j]=1;
                else if(i==0)
                    arr[i][j]=0;
                else if(s[i-1]==t[j-1])
                    arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
                else 
                    arr[i][j]=arr[i-1][j];
                
            }
        return arr[m][n];
        
    }
};
