class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;
        for(int num:arr){
            map[num]++;
        }
        for(auto num:map){
            for(auto nums:map){
                if(nums.second==num.second && nums.first !=num.first){
                    return false;
                }
            }
        }
        return true;
    }
};
//the 1st approach is faster
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> occurrencesMap;
        for (const auto& i: arr) {
            occurrencesMap[i]++;
        }
        unordered_set<int> uniqueCountsSet;
        for (const auto& entry: occurrencesMap) {
            if (!uniqueCountsSet.insert(entry.second).second) { //the insert fn returns two values: first-inserted element's position an                                                                  
                 return false;
            }
        }

        return true;
    }
};
