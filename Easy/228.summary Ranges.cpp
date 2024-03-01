class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size();
        if(n == 0 )
                return result;
        int a = nums[0];
        for(int i = 0; i<n; i++)
        {
            if( i == n-1 || nums[i]+1 != nums[i+1]) //checking if element's is a non-consecutive one
            {
                if(nums[i] != a) //stores the consecutive range
                    result.push_back(to_string(a)+ "->"+ to_string(nums[i]));
                else //if it is a non-consecutive one then it'll be stored 
                        result.push_back(to_string(a)); 
                if(i != n-1) 
                    a = nums[i+1];
            }
        }
        return result;
    }
};
