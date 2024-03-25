class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        unordered_map<int,int> map;
        for(int num:nums){
            map[num]++;
            if(map[num]==2){
                v.push_back(num);
            }
        }
        return v;

    }
};
