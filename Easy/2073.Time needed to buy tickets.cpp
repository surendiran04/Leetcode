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
class Solution { //queue based approach - beats 50% 
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int, int>> queue;
        for (int i = 0; i < tickets.size(); i++) {
            queue.push(make_pair(tickets[i], i)); //make_pair function is a utility function in C++ that creates a pair object
        }
        int time=0;
        while (true) {
            pair<int, int> item = queue.front();
            queue.pop();
            if (item.first > 0) {
                item.first--;
                time++;
                queue.push(item);
            }
            if (item.first == 0 && item.second == k) {
                return time;
            }
        }
    }
    };
