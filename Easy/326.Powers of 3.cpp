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
class Solution { //iterative approach
public:
    bool isPowerOfThree(int n) {
        while(n>1){
            if(n%3!=0){
                return false;
            }
            n=n/3;
        }
        if(n==1){ //if it is divided by 4 then it gives 1 as quotient
            return true;
        }
        return false;
    }
};
