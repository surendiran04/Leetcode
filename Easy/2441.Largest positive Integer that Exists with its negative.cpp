class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());   //T(n) - O(nlogn)
        for(int i=nums.size()-1;i>=0;i--){
            bool exists = find(begin(nums),end(nums), -1*nums[i]) != end(nums); //returns an iterator to the end of the array if element not exist
            if(exists  && nums[i]>0){
                return nums[i];
            }
            
        }
        return -1;
    }
};
