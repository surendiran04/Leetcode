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
