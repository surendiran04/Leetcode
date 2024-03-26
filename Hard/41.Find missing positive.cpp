class Solution {
public:
    int firstMissingPositive(vector<int>& nums) { // O(n) - time complexity and uses only O(1) space
        int n= size(nums);
       
        for(int i=0;i<n;i++){
            int x=nums[i]; // x = current element
            while(x>=1 && x<=n && x!=i+1 && nums[x-1]!=x){ //the should be in the range [1,n] and if it not in its crt position then it swapped
                swap(nums[x-1],nums[i]);
                x=nums[i];
            }
        }


        for(int i=0;i<n;i++){
            if(nums[i] == i+1)continue; //giving the missing first positive integer
                return i+1;       
            
        }
        
        return n+1;
    }
};
