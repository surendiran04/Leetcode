class Solution {
public:
    bool isPowerOfThree(int n) {
        double p=log10(n)/log10(3);
        return (p-round(p)==0)?true:false;
    }
};
class Solution { //recursive approach
public:
    bool isPowerOfThree(int n) {
        if(n==0)
         return false;
        if(n%3==0)
         return isPowerOfThree(n/3);
        return n==1;
    }
};
