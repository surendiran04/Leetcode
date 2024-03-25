class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        unordered_map<int,int> map;
        for(int num:nums){
            map[num]++;
            if(map[num]==2){
                v.push_back(num);
            }
        }
        return v;

    }
};
//second approach uses less space
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>result;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int num =abs(nums[i]);
            int index = num - 1;
            if(nums[index] < 0)  //negating the value if the index again occurs then the nums[index] will be less than 0 and added to the result 
                result.push_back(num);
            
            nums[index] *= -1;
        }
        return result;
    }
};
