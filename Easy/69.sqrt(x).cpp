class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;
        long long mid;
        while(low<=high){
            mid=(low+high)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid>x) high= mid-1;
            else low=mid+1;
        }
        return high; //*****
    }
};
//100% efficient code
class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;
        long long mid;
        while(low<=high){
            mid=low+(high-low)/2;  //this condition is important
            if(mid*mid==x) return mid;
            else if(mid*mid>x) high= mid-1;
            else low=mid+1;
        }
        return high;
    }
};
