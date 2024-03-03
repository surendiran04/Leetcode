class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int tot=((n-i)*(i+1)+1)/2;
            sum=sum+tot*arr[i];   
        }
        return sum;
    }
};
