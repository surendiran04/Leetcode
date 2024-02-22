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
