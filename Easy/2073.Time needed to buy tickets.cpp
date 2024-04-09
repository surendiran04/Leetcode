 class Solution { //best approach
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        for (int i = 0; i < tickets.size(); i++) {
            if (tickets[i] < tickets[k]) {
                time += tickets[i];
            } else if (i <= k && tickets[i] >= tickets[k]) {
                time += tickets[k];
            } else {
                time += tickets[k] - 1;
            }
        }
        return time;
    }
};
