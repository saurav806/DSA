//Link:- https://practice.geeksforgeeks.org/problems/stock-buy-and-sell2615/1

class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        int buy=0;
        int profit=0;
        for(int sell=1;sell<n;sell++){
            if(prices[sell-1]>prices[sell] ||( prices[sell]<=prices[buy] && buy<sell)){
                profit+=(prices[sell-1]-prices[buy]);
                buy=sell;
                continue;
            }
            if(sell==n-1)
                profit+=(prices[sell]-prices[buy]);
        }
        return profit;
    }
};
