//https://leetcode.com/problems/counting-bits/

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> vtr(num+1);
        int x=1,r=1;
        for(int i=1;i<=num;i++){
            if(i==x){
                vtr[i]=1;
                x*=2;
                r=1;
            }
            else{
                vtr[i]=vtr[r]+1;
                r++;
            }
        }
        return vtr;
        
    }
};
