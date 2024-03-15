class Solution { //using prefix sum
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cur = 1;
        int n= nums.size();
        vector<int> ans(n,1);
        for (int i = 0; i < n; i++) { //multiplying all the elements except last element of nums[i]
            ans[i] = cur;
            cur *= nums[i];
        }
        cur = 1;
        for (int i = n - 1; i >= 0; i--) { //except 1st element of nums[i] here we multiplying
            ans[i] *= cur; 
            cur *= nums[i]; 
        }
        return ans;
    }
};
