class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return countSubarraysWithAtMostKDistinct(nums, k) - countSubarraysWithAtMostKDistinct(nums, k - 1);
    }

    int countSubarraysWithAtMostKDistinct(vector<int>& nums, int k) { //this fn is the exact code of 2958.Length of longest subarray with at most k grequency
        int start = 0;
        int count = 0;
        unordered_map<int, int> frequencyMap;
        for (int end = 0; end < nums.size(); end++) {
            frequencyMap[nums[end]]++;
            while (frequencyMap.size() > k) {
                frequencyMap[nums[start]]--;
                if (frequencyMap[nums[start]] == 0) {
                    frequencyMap.erase(nums[start]);
                }
                start++;
            }
            count += end - start + 1;
        }
        return count;
    }
};


