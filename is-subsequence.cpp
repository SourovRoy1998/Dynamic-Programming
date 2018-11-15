//https://leetcode.com/problems/is-subsequence
//Very inefficient code

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.length();
        int n=t.length();
        
        bool memoize[m+1][n+1];
        
        for(int i=0;i<=m;i++)
            for(int j=0;j<=n;j++){
                if(i==0)
                    memoize[i][j]=true;
                else if(j==0)
                    memoize[i][j]=false;
                else if(s[i-1]==t[j-1])
                    memoize[i][j]=memoize[i-1][j-1];
                else 
                    memoize[i][j]=memoize[i][j-1];
            }
        
       /* for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++)
                cout<<memoize[i][j]<<" ";
            cout<<endl;
        }
        */
        return memoize[m][n];
    }
};



//Efficient Solution
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.length();
        int n=t.length();
        int i=0,j=0;
        
        while(i<m && j<n){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        
        return i==m;
        
    }
};
