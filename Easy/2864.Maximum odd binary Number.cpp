//this code partially fails for high test cases where the stoi fn cannot able to covert the string to number
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n1 = __builtin_popcount(stoi(s,nullptr,2));
        int n =s.length()-n1;
        string ans=string(n1-1,'1')+string(n,'0')+'1';
        return ans;
    }
};
