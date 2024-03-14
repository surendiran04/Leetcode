class Solution { //same as qn: 930.Binary subarrays with sum
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        count[0]=1;
        int currentSum=0;
        int totalSubarrays=0;
        for(auto num:nums){
            currentSum+=num;
            if(count.find(currentSum-k)!=count.end()){
                totalSubarrays+=count[currentSum-k];
            }
            count[currentSum]++;
        }
        return totalSubarrays;
    }
};
