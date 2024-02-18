class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> map;
        int maxCount=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){  //takes O(n^2) time 
            cnt=count(nums.begin(),nums.end(),nums[i]); -count takes O(n)
            map[cnt]=nums[i];
           if(maxCount<=cnt){
               maxCount=cnt;
           }
        }
        return map[maxCount];
    }
};
