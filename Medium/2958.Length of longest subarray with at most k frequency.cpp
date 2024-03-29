class Solution { //passed only 851/992
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<int> v;
        for(int num:nums){
            map[num]++;
        }
        int length=0;
        for(auto num:map){
            if(num.second>=k){
                length+=k;
            }
            else{
                length+=num.second;
            }
        }
        return length;

    }
};
class Solution {//passes all cases
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int n = nums.size();
        int l = 0, r = 0, len {};
        while(r < n)
        {
            int cur = nums[r++];
            map[cur]++;
            while(l < r && map[cur] > k)
            {
                map[nums[l++]]--;
            }
            len = max(len, r - l);
        }
        return len;
    }
};
