class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> map;
        int maxCount=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){  //takes O(n^2) time  - not run in leet code
            cnt=count(nums.begin(),nums.end(),nums[i]); -count takes O(n)
            map[cnt]=nums[i];
           if(maxCount<=cnt){
               maxCount=cnt;
           }
        }
        return map[maxCount];
    }
};
//optimised the time complexity by O(nlogn)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> map;
        int maxCount=0;
        int low=0;
        int up=0;int cnt=0;
        sort(nums.begin(),nums.end()); //to use bounds vectors need to be sorted order
        for(int i=0;i<nums.size();i++){
            low=lower_bound(nums.begin(),nums.end(),nums[i])-nums.begin(); //returns the index
            up=upper_bound(nums.begin(),nums.end(),nums[i])-nums.begin();
            cnt=up-low; //up-low is count
            map[cnt]=nums[i]; 
           if(maxCount<=cnt){
               maxCount=cnt;
           }
        }
        return map[maxCount];
    }
};
//easier technique by unordered map -O(n)
unordered_map<int,int> map;
        int n=nums.size()/2;
        for(auto a:nums){
            map[a]++;
        }
        for (auto a : map) {
            if (a.second > n) {
                return a.first; 
            }
        }
        return 0;

//count of the number must be greater than size/2 ,so the size/2th element must be that element - O(nlogn)
sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
