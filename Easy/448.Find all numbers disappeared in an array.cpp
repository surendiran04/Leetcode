class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       vector<int> result;

        // Mark each number as negative based on its value
        for (int num : nums) {
            int index = abs(num) - 1;
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }

        // Any positive value indicates a missing number
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) {   //the index which doesn't have a negative value denotes that (i+1)th is not there
                result.push_back(i + 1);
            }
        }

        return result;
    }
};
