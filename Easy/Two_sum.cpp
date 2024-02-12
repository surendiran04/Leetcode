#include <bits/stdc++.h>
using namespace std;

//Hash map approach
//For each element nums[i], it checks whether the complement (target - nums[i]) exists in the hash map.
//time complexity-O(n) 
//space complexity-O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            if(map.find(target-nums[i])!=map.end()){
                  return {map[target-nums[i]],i};   //hash fn operation takes only constant time
            }
            map[nums[i]]=i;
        }
        return {-1,-1};
       
    }
};
