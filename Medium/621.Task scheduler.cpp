//the thing the cpu cannot do the same task next it has to wait for n time so,we should do other task at that time
//for next n time the same task cannot be done
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int freq[26] = {0};
        for(char task : tasks){
            freq[task - 'A']++;
        }
        sort(begin(freq) , end(freq));
        int chunk = freq[25] - 1;
        int idel = chunk * n;
        for(int i=24; i>=0; i--){
            idel -= min(chunk,freq[i]);
        }

        return idel < 0 ? tasks.size() : tasks.size() + idel;
    }
};
//2nd approach very easier
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int freq[26] = {0};
        int maxi = 0;
        for (char task : tasks) {
            freq[task - 'A']++;
            maxi=max(maxi, freq[task - 'A']);
        }
        int numOfElementsWithMaxFreq = 0;
        for (int frequency : freq) {
            if (frequency == maxi) {
                numOfElementsWithMaxFreq++;
            }
        }
        int interval = max((n + 1) * (maxi - 1) + numOfElementsWithMaxFreq, static_cast<int>(tasks.size()));
        return interval;
    }
};
