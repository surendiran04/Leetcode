class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n==0){
            return false;
        }
        //floor returns the min nearest integer - floor(86.34) = 86
        //ceil returns the max nearest integer - ceil(86.34) = 87
        return (ceil(log2(n))==floor(log2(n)));
    }
};
//by bit manupulation method which more faster
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && !(n & n-1);  //(n & n-1) - checks for common bits, // 5 & 4 = 4, // 4 & 3 = 0
    }
};
//it is also efficient
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int cnt=0;
        while(n>0){
            if(n&1){
                cnt++;
            }
            n>>=1; //right shifting the bits (which means dividing the n by 2 if we get 1 then it is a power of 2)
        }
        return (cnt==1)?true:false;
    }
};
