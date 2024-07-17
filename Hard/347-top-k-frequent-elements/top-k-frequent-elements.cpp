class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<int> res;
        for(int num:nums){
            map[num]++;
        }
        int n=nums.size();
         vector<vector<int>> v(n+1);
        for(const pair<int, int>& x : map){
            v[x.second].push_back(x.first);
        }
        for(int i=n;i>0 && k;i--){
            if(!v[i].empty()){
                for(const int& m : v[i]){
                     res.push_back(m);
                     k--;
                }   
            }
        }
        return res;
    }
};