class Solution {
public:
    int reverse(int x) {
        long temp=0;
        while( x!=0){
           temp=temp*10+x%10;
           x=x/10;
        }
        if(temp<INT_MAX && temp>INT_MIN){
            return temp;
        }
        return 0;
    }
};
