class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> set(nums.begin(),nums.end());//duplicates are erased here
        nums.erase(nums.begin(),nums.end());
        for(auto a:set){
            nums.emplace_back(a);//copying only the unique elements to the vector
        }
        return set.size();
    }
};
