class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.empty())
            return "";
        vector<char> stack;
        stack.push_back(num[0]);

        for (int i = 1; i < num.length(); i++) {
            char digit = num[i];

            while (!stack.empty() && stack.back() > digit && k) { //we have to form a number that should be lesser and have to remove k digits from it
                stack.pop_back();
                k--;
            }
            stack.push_back(digit);
        }
        while (k) {
            stack.pop_back();
            k--;
        }
        string res;
        for (char c : stack)
            res += c;
        res.erase(0, res.find_first_not_of('0')); //removes if there 0 in the starting "000123" becomes "123"
        return res.empty() ? "0" : res;
    }
};
