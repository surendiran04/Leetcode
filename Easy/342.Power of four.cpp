class Solution {
public:
    bool isPowerOfFour(int n) {
        while(n>1){
            if(n%4!=0){
                return false;
            }
            n=n/4;
        }
        if(n==1){ //if it is divided by 4 then it gives 1 as quotient
            return true;
        }
        return false;
    }
};
class Solution { //recursive approach
public:
    bool isPowerOfFour(int n) {
        if(n==0){
            return false;
        }
        if(n%4==0){
            return isPowerOfFour(n/4); 
        }
        return n==1;
    }
};
