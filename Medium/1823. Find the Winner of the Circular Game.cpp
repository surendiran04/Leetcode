There are n friends that are playing a game. The friends are sitting in a circle and are numbered from 1 to n in clockwise order. 
The rules of the game are as follows:
Start at the 1st friend.
Count the next k friends in the clockwise direction including the friend you started at. The counting wraps around the circle and may count some friends more than once.
The last friend you counted leaves the circle and loses the game.
If there is still more than one friend in the circle, go back to step 2 starting from the friend immediately clockwise of the friend who just lost and repeat.
Else, the last friend in the circle wins the game.
Given the number of friends, n, and an integer k, return the winner of the game.

Input: n = 5, k = 2
Output: 3
Explanation: Here are the steps of the game:
Explanation: The friends leave in this order: 5, 4, 6, 2, 3. The winner is friend 1.
1) Start at friend 1.
2) Count 2 friends clockwise, which are friends 1 and 2.
3) Friend 2 leaves the circle. Next start is friend 3.
4) Count 2 friends clockwise, which are friends 3 and 4.
5) Friend 4 leaves the circle. Next start is friend 5.
6) Count 2 friends clockwise, which are friends 5 and 1.
7) Friend 1 leaves the circle. Next start is friend 3.
8) Count 2 friends clockwise, which are friends 3 and 5.
9) Friend 5 leaves the circle. Only friend 3 is left, so they are the winner.
Input: n = 6, k = 5
Output: 1
  
class Solution { // Time- O(n^2)
public:
    int findTheWinner(int n, int k) {
        vector<int> circle;
        for(int i=1;i<=n;i++){ //inserted elements
            circle.push_back(i);
        }
        int cur_index=0;
        while(circle.size()>1){
            int next_to_remove=(cur_index+k-1)%circle.size(); //finding the index to remove
            circle.erase(circle.begin()+next_to_remove);
            cur_index=next_to_remove;
        }
        return circle[0];
    }
};

class Solution { //- Bottom-up dp approach with O(n) time and O(1) space

public:
    int findTheWinner(int n, int k) {
        int res = 0;
        for (int player_num = 2; player_num <= n; ++player_num) {
            res = (res + k) % player_num;
        }
        return res + 1;
    }
};
