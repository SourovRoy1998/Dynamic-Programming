//https://leetcode.com/problems/coin-change/

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int arr[n+1][amount+1];
        
        for(int i=0;i<=n;i++)
            for(int j=0;j<=amount;j++){
                if(i==0)
                    arr[i][j]=INT_MAX-1;
                else if(j==0)
                    arr[i][j]=0;
                else{
                    if(coins[i-1]>j)
                        arr[i][j]=arr[i-1][j];
                    else{
                        arr[i][j]=min(arr[i-1][j],1+arr[i][j-coins[i-1]]);
                    }

                }
            }
        
        
       /* for(int i=0;i<=n;i++){
            for(int j=0;j<=amount;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        */
        
        return (arr[n][amount]!=(INT_MAX-1))?arr[n][amount]:-1;
    }
};
