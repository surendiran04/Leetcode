class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=0;      //find the sqrt of the number 
        int high=num;
        long long mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(mid*mid==num) return mid;
            else if(mid*mid>num) high= mid-1;
            else low=mid+1;
        }
        return (high*high==num)?true:false; //4*4=16 returns true ......if the num is 23 then it'll return 4 as ans 4*4!=23,false
    }
};
