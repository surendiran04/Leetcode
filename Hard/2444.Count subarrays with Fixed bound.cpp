class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long res = 0;
        int badIdx = -1;
        int leftIdx = -1;
        int rightIdx = -1;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] < minK || nums[i] > maxK){
                badIdx = i;
            }
            if (nums[i] == minK){
                leftIdx = i;
            }
            if (nums[i] == maxK){
                rightIdx = i;
            }
            res += max(0,min(leftIdx, rightIdx) - badIdx);
        }
        return res;
    }
};
