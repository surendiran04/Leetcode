class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=1;i<=n;i++){ //here indexing starts from 1 instaed of 0
            if(n%i==0){
                sum=sum+pow(nums[i-1],2); //to access those elements it starts from 0
            }
        }
        return sum;
    }
};
