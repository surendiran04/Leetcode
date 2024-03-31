class Solution {
public:
    bool isPowerOfThree(int n) {
        double p=log10(n)/log10(3);
        return (p-round(p)==0)?true:false;
    }
};
