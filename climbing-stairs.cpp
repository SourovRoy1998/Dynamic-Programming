//https://www.lintcode.com/problem/climbing-stairs/description

class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
    int climbStairs(int n) {
        // write your code here
        if(n<1)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        int a=1,b=2,temp;
        
        for(int i=3;i<=n;i++){
            temp=a;
            a=b;
            b+=temp;
        }
        return b;
            
    }
};
