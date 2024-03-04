class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0){
            return 1;
        }
        else if(n==1){
            return 10;
        }
      //f(0)=1,f(1)=10,formula- 9*9*8...f(n-1);
        int result=10;
        int num=81;
        int range=8;
        for(int i=2;i<n;i++){
            result+=num;
            num*=range;
            range=range-1;
        }
        return result+num;
    }
};
//the needs to be solved in backtracking and dp
