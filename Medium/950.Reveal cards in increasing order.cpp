class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int> q;
        int n = deck.size();
        sort(deck.begin(), deck.end());
        vector<int> v(n, 0);
        int i;
        for (i = 0; i < n; i++) { //q maintains the index logic
            q.push(i);
        }
        i = 0;
        while (!q.empty()) {
            int front = q.front();
            q.pop();
            v[front] = deck[i];
            i++;
            int x = q.front();
            q.pop();
            q.push(x);
        }
        return v;
    }
};
