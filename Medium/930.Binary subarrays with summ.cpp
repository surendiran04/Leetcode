class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> count;
        count[0] = 1; //intially count[0]=1 coz,if the curr_sum-goal becomes 0 we got the subarray sum = goal so weed need to add 1 to the total_subarray count
        int curr_sum = 0;
        int total_subarrays = 0;

        for (int num : nums) {
            curr_sum += num;      //here we are keep on adding the sum
            if (count.find(curr_sum - goal) != count.end()) { //if the curr_sum - goal found in the map that means there exist a subarray whose sum is equal to goal
                total_subarrays += count[curr_sum - goal];
            }
            count[curr_sum]++;
        }

        return total_subarrays;
    }
};
