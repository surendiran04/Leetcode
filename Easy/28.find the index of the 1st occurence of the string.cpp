class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if (needle.length() > haystack.length()) {
            return -1;
        }
        //time complexity - O(n*m) we can also use KMP algo whic of time O(n+m)
        for (int i = 0; i <= haystack.length() - needle.length(); ++i) {
            if (haystack.substr(i, needle.length()) == needle) { //substr fn creates a substring to the length of the needle,i is the starting index of the substring
                return i;
            }
        }
        return -1;
    }
};
