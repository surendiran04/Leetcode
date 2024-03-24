class Solution { //initial bruteforce soln
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n<2){
            return -1;
        }
        unordered_map<int,int> map;
        for(int num:nums){
            map[num]++;
        }
        for(auto num:map){
            if(num.second>1){
                return num.first;
            }
        }
        return 0;
    }
};
class Solution { //little bit optimsied
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n<2){
            return -1;
        }
        unordered_map<int,int> map;
        for(int num:nums){
            map[num]++;
            if(map[num]>1){
                return num;
            }
        }
        return 0;
    }
};
