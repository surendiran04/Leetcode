class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int max_num = 0;
        for (char c : s) {               // whenever encounter a '(' increase the count and decrease the count whenever ')'
            if (c == '(') {
                count++;
                if (max_num < count)   //changing the max_num whenever the count is greater
                    max_num = count;
            } else if (c == ')') {
                count--;
            }
        }
        return max_num;
    }
};
