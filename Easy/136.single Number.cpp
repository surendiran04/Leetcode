//optimized my map
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i : nums) {
           mp[i]=mp[i]+1;
        }
        for (auto i : mp) {
           if(i.second==1)
            return i.first;
        }
        return -1;
    }
};
//using count method takes O(n2) time complexity
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i : nums){
            if(count(nums.begin(),nums.end(),i)==1){ //count takes -O(n)
                return i;
            }
        }
        return -1;
    }
};
