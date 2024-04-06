class Solution { //stack based approach
public:
    std::string minRemoveToMakeValid(std::string s) {
        int leftCount = 0;
        int rightCount = 0;
        std::stack<char> stack;

        // Pass 1
        for (char ch : s) {
            if (ch == '(') {
                leftCount++;
            } else if (ch == ')') {
                rightCount++;
            }
            if (rightCount > leftCount){  //only when encountering '(' then push the char orelse extra ')' is in the given string
                rightCount--;
                continue;
            } else {
                stack.push(ch);
            }
        }

        std::string result = "";

        // Pass 2
        while (!stack.empty()) {
            char currentChar = stack.top();
            stack.pop();
            if (leftCount > rightCount && currentChar == '(') {  //suppose we have pushed extra '(' in the stack don't need to push that
                leftCount--;
            } 
            else {
                result += currentChar;
            }
        }

        // Reverse the result string
        std::reverse(result.begin(), result.end());
        return result;
    }
};

class Solution { //this approach is faster
public:
    string minRemoveToMakeValid(string s) {
        int openParenthesesCount = 0;
        vector<char> arr(s.begin(), s.end()); 

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == '(')
                openParenthesesCount++;
            else if (arr[i] == ')') {
                if (openParenthesesCount == 0) //for every extra ')' mark it as *
                    arr[i] = '*';
                else
                    openParenthesesCount--;
            }
        }

        // Second pass: mark excess opening parentheses from the end
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (openParenthesesCount > 0 && arr[i] == '(') {       //for every extra '(' mark it as *
                arr[i] = '*'; // Mark excess opening parentheses
                openParenthesesCount--;
            }
        }
        
        string result = "";
        for (char c : arr) {
            if (c != '*')  //pushing only the crt string except *
                result += c;
        }

        return result;
    }
};
