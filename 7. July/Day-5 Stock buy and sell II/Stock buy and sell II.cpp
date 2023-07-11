/* https://practice.geeksforgeeks.org/problems/stock-buy-and-sell2615/1
//* https://youtu.be/nGJmxkUJQGs
//* https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/submissions/945560247/
//* https://www.geeksforgeeks.org/stock-buy-sell/

class Solution {
  public:
    int rec(int ind, int buy, int n, vector<int>& values, vector<vector<int>>& dp){
        // Base Case
        // end of list
        if(ind == n){
            return 0;
        }

        if(dp[ind][buy] != -1){
            return dp[ind][buy];
        }

        int profit = 0;
        // Recursive Case
        // not buyed yet-> either buy current stock or skip it
        if(buy){
            // max(boughtValue + findForSellValue, notBuyed + findForNewBuyValue)
            profit = max(-values[ind] + rec(ind+1, 0, n, values, dp),
                            0 + rec(ind+1, 1, n, values, dp));
        }
        // either sell the boughted stock at current value or skip it
        else{
            // max(soldValue + buyNewStock, notSold + findForNewSellValue)
            profit = max(values[ind] + rec(ind+1, 1, n, values, dp),
                            0 + rec(ind+1, 0, n, values, dp));
        }

        return dp[ind][buy] = profit;
    }
    int tab(vector<int>& values, int n){
        vector<vector<int>> dp(n+1, vector<int>(2, 0));

        // dp[n][0] = dp[n][1] = 0;

        for(int ind = n-1; ind >= 0; --ind){
            for(int buy = 0; buy <= 1; ++buy){
                if(buy){
                    dp[ind][buy] = max(-values[ind] + dp[ind+1][0], 0 + dp[ind+1][1]);
                }
                else{
                    dp[ind][buy] = max(values[ind] + dp[ind+1][1], 0 + dp[ind+1][0]);
                }
            }
        }

        return dp[0][1];
    }
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        
        //* DP Memoization-> TLE
        // vector<vector<int>> dp(n, vector<int>(2, -1));
        // return rec(0, 1, n, prices, dp);
        
        //* DP Tabulations->
        return tab(prices, n);
    }
};