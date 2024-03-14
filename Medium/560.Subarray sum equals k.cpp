 //same as qn: 930.Binary subarrays with sum
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        count[0]=1;
        int prefixSum=0;
        int totalSubarrays=0; //prefixsum approach
        for(auto num:nums){
            prefixSum+=num;
            if(count.find(prefixSum-k)!=count.end()){
                totalSubarrays+=count[prefixSum-k];
            }
            count[prefixSum]++;
        }
        return totalSubarrays;
    }
};
