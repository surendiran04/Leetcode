class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0,j=0;int product=1;
        for(int i=0;i<nums.size();i++){
             product =product * nums[i];
            while(product>=k && j<=i){
                product/=nums[j];
                j++;
            }
            count+=i-j+1;   
        }
        return count;
    }
};
