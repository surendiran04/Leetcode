class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end()); //sorting the array
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) //checking the element and the next element
                return true;
        }
        return false;
    }
};
