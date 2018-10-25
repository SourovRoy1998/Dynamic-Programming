//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        profit = []
        for i in range(1,len(prices)):
            profit.append(prices[i]-prices[i-1])
        
        temp = 0
        maxi=0
        print(profit)
        for x in profit:
            temp+=x
            if(temp<0):
                temp=0
            maxi = max(maxi,temp)
        return maxi
