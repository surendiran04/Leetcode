//the qn is to check whether can we split the array into 2 unqiue arrays
class Solution { 
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> map;
        int n = nums.size();
        for (int i=0;i<n;i++){
            map[nums[i]]++;
            if(map[nums[i]]>2){ //checking if any of the element has occured more than 3 times so that we can split that number into 2 arrays so the condition fails
                return false;
            }
        }
        return true;
    }
};
