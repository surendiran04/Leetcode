class Solution {
public:
    string makeGood(string s) {
        stack<char> stack;
        for (char c : s) {
            if (!stack.empty() && abs(c - stack.top()) == 32) { //the difference between the small alphabet and capital alphabet is 32
                stack.pop();
            } else {
                stack.push(c);
            }
        }
        string ans;
        while (!stack.empty()) { //stack top returns reversal of the string so stack.top()+ans
            ans = stack.top() + ans;
            stack.pop();
        }
        return ans;
    }
};
//another best approach - uses less space
class Solution {
public:
    bool check(char x, char y) {
        return abs(x - y) == 32;
    }

    string makeGood(string s) {
        string res = "";
        for (char c : s) {
            if (!res.empty() && check(res.back(), c)) res.pop_back();
            else res += c;
        }
        return res;
    }
};
