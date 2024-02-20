class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buy=prices[0];
        for(auto sell:prices){
            if(sell>buy){
                profit=(profit>(sell-buy)?profit:(sell-buy));
            }
            else{
                buy=sell;
            }
        }
        return profit;
    }
};
//*************************************js-code****************************//
// var maxProfit = function(prices) {
//        let left = 0; // Buy
//   let right = 1; // sell
//   let max_profit = 0;
//   while (right < prices.length) {
//     if (prices[left] < prices[right]) {
//       let profit = prices[right] - prices[left]; // our current profit

//       max_profit = Math.max(max_profit, profit);
//     } else {
//       left = right;
//     }
//     right++;
//   }
//   return max_profit;
// };
