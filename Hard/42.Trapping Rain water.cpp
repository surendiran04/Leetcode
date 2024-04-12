class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;
        vector<int> left(n);
        vector<int> right(n);
        // Fill left array
        left[0] = height[0];
        for (int i = 1; i < n; i++) {
            left[i] = max(left[i - 1], height[i]);
        }
        // Fill right array
        right[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            right[i] = max(right[i + 1], height[i]);
        }
        // Calculate trapped water
        int trappedWater = 0;
        for (int i = 0; i < n; i++) {
            trappedWater += min(left[i], right[i]) - height[i];
        }
        return trappedWater;
    }
};
//beats 66% - the same above approach is optimised both in time and space
class Solution {
public:
    int trap(std::vector<int>& height) {
        int i = 0, left_max = height[0], sum = 0;
        int j = height.size() - 1, right_max = height[j];
        while (i < j) {
            if (left_max <= right_max) {
                sum += (left_max - height[i]);
                i++;
                left_max = std::max(left_max, height[i]);
            } else {
                sum += (right_max - height[j]);
                j--;
                right_max = std::max(right_max, height[j]);
            }
        }
        return sum;
    }
};
