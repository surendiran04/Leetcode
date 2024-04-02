class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;
        for(int num:arr){
            map[num]++;
        }
        for(auto num:map){
            for(auto nums:map){
                if(nums.second==num.second && nums.first !=num.first){
                    return false;
                }
            }
        }
        return true;
    }
};
