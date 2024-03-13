class Solution {
public:
    int pivotInteger(int n) {
        int sum = n*(n+1)/2; //sum of n natural number
        int pivot=sqrt(sum); 
        return (pivot*pivot==sum)?pivot:-1;
    }
};
