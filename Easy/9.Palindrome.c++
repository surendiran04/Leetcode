class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        double rev = 0;
        while(temp>0){
            rev =10*rev + temp%10;
            temp/=10;
        }
       return (rev==x);
};
};
