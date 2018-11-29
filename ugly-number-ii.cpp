//https://leetcode.com/problems/ugly-number-ii/submissions/

class Solution {
public:
    int nthUglyNumber(int n) {
        int i=0,j=0,k=0;
        int ugly[n];
        ugly[0]=1;
        int c=1;
        while(c<n){
            ugly[c]=min(min(ugly[i]*2,ugly[j]*3),ugly[k]*5);
            
            if(ugly[c]==ugly[i]*2)
                i++;
            if(ugly[c]==ugly[j]*3)
                j++;
            if(ugly[c]==ugly[k]*5)
                k++;
            c++;
        }
        /*
        for(int i=0;i<n;i++)
            cout<<ugly[i]<<" ";
            */
        return ugly[n-1];
    }
};
