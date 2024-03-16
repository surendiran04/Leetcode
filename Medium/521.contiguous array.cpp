class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int count=0;
        int maxLen=0;
        unordered_map<int,int>map;
        map[0]=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){ //prefixSum
                count--;
            }
            else{
                count++;
            }
            if(map.contains(count)){ //contains check if there is a key exists or not
                maxLen=max(maxLen,i-map[count]); //which means there exist a subarray where there exist equal no of 0's and 1's
            }
            else{
                map[count]=i;
            } 
        }
        return maxLen;
    }
};
