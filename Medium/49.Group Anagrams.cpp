class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>> v;
       unordered_map<string,vector<string>> map;
       for(string s:strs){
        string key=s;
        sort(key.begin(),key.end());
        map[key].push_back(s); //based on the key the sting is pushed to map
       }
       for(auto s:map){
        v.push_back(s.second);
       }
       return v;
    }
};
