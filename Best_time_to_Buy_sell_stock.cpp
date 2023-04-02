//question: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

//solution:
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buyval=prices[0];
        int ans=0;
        int curprofit=0;

        for(int i=1;i<n;i++)
        {
            if(prices[i]<buyval)
            {
                buyval=prices[i];
            }
            curprofit=prices[i]-buyval;
            if(ans<curprofit)
            {
                ans=curprofit;
            }
        }

        return ans;
    }
};