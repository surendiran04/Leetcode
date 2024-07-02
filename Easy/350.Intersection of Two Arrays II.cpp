class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) { //using map to count the frequency
        vector<int> result;
        unordered_map<int,int> map;
        for(int num:nums1){
            map[num]++;
        }
        for(int num:nums2){
            if(map.find(num)!=map.end() && map[num]>0){
                result.push_back(num);
                map[num]--;
            }
        }
        return result;
    }
};
