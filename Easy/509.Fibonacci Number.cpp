class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
};
//looping is more efficient as it takes only O(n) time whereas in recursion it takes O(2^n) because of not storing the previous call 
class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        int a=0,b=1;int c;
        for(int i=2;i<=n;i++){
            c = a+b;
            a=b;
            b=c;
        }
        return c;
    }
};
