// return the maximum number bottles that can be drunk by even exchanging the bottles
Input: numBottles = 9, numExchange = 3
Output: 13
Explanation: You can exchange 3 empty bottles to get 1 full water bottle.
Number of water bottles you can drink: 9 + 3 + 1 = 13.
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int Total_bottles=numBottles;
        while(numBottles>=numExchange){  //once the empty bottles became less than the req refill bottles to exchange 
            int refill_bottles=numBottles/numExchange;
            Total_bottles+=refill_bottles;
            int empty_bottles=numBottles%numExchange;
            numBottles=empty_bottles+refill_bottles;
        }
        return Total_bottles;        
    }
};
