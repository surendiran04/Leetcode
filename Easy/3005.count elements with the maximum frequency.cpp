class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> map;
        int maxFrequency=0;
        for(auto num:nums){
            map[num]++;  //storing the frequency as tha value and number as the key
            maxFrequency=max(maxFrequency,map[num]);
        }
        int result=0;
        for(auto num:nums){
            if(map[num]==maxFrequency){ //if the element is having the maximum frequency then the count will be added
                result++;
            }
        }
        return result;
    }
};
