class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int N=customers.size();
        vector<int> ct(N,0);
        double sum = 0;
        ct[0] = customers[0][0] +  customers[0][1];
        for (int i = 0; i < N; i++) {
            sum += ct[i] - customers[i][0];
            if (  i + 1 < N && customers[i+1][0] < ct[i]){
                ct[i + 1] = ct[i] + customers[i+1][1];
            } else if (i + 1 < N && customers[i+1][0] > ct[i]  ) {
                ct[i + 1] = customers[i+1][0] + customers[i+1][1];
            } else {
                break;
            }
        }

        double average = sum / N;

        return average;
    }
};
