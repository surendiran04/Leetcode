class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=0;i--){
            bool exists = find(begin(nums),end(nums), -1*nums[i]) != end(nums);
            if(exists  && nums[i]>0){
                return nums[i];
            }
            
        }
        return -1;
    }
};
