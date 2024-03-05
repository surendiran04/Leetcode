class Solution {
public:
    int minimumLength(string s) {
        int start=0;
        int end=s.length()-1;
        while(start<end && s[start]==s[end]){
            char currentChar=s[start];
            while(start<s.length() && currentChar==s[start]){ //to pass duplicates at the starting
               start++;
            }
            while(end>=0 && currentChar==s[end]){ //pass duplicates at the ending
                end--;
            }
        }
        return (start > end)? 0 : (end-start+1);
    }
};
