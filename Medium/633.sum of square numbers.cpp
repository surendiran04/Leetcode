class Solution {
public:
    bool judgeSquareSum(int c) {
        int i=0;
        int j=pow(c,0.5); //checking only max upto the sqrt of c
        long long sum=0;
        while(i<=j){
            sum=pow(i,2)+pow(j,2);
            if(sum==c) return true;
            else if(sum>c) j--;
            else i++;
        }
        return false;
    }
};
