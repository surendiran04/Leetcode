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
//2nd approach is more efficient,although 1st approach uses a map data structure
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal-1); //subtracting the count of subarrays whose count is less than goal-1 from the count of subarrays whose count is less than goal
                                                        //which helps us to find the count of subarrays whose count is equal to count 
    }
    int atMost(vector<int>& nums, int goal){
        int i, j = 0, sum = 0, result = 0; //using a two-pointer approach
        for (i = 0; i< nums.size();i++) {
            sum += nums[i];
            while (sum > goal && j <= i) {  //if the sum gets greater than goal we are subtracting sum until it is less than or equal to sum by the j which points to the starting index 
                sum -= nums[j];
                j++;
            }
            result += i - j + 1;
        }
        return result;
    }
};
