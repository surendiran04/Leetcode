class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
        for(int i=n-1;i>0;i--){
            if(words[i-1].length()==words[i].length() && isAnagram(words[i],words[i-1])){
                words.erase(words.begin()+i); 
            } 
        }
        return words;
    }
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        for (auto x : s) {
            count[x]++;
        }
        for (auto x : t) {
            count[x]--;
        }
        for (auto x : count) {
            if (x.second != 0) {
                return false;
            }
        }    
        return true;
    }
};