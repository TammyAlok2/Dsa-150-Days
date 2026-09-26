class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int profit = 0;
        int buy = prices[0];

        for(int i=1;i<n;i++){
            if(prices[i] < buy){
                buy = prices[i]; // buy the object
            }
            else {
                // sell it find the max profit 
                profit = max(profit,prices[i]-buy);
            }
        }
        return profit;
    }
};