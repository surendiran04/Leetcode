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
             return 0;
    }
};
 //using Floyd’s Tortoise and Hare algorithm           
class Solution {  //uses O(1) space
public:
    int findDuplicate(std::vector<int>& nums) {
        int slow = nums[0]; 
        int fast = nums[0];

        // Find the intersection point of the two pointers
        do {
            slow = nums[slow]; //nums[first index] gives the other numbers value,by this way both fast and slow are changing
            fast = nums[nums[fast]]; //fast is moving at 2x faster time than slow
        } while (slow != fast);

        // Find the entrance of the cycle
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};
        }
        return 0;
    }
};
