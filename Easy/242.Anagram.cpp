class Solution {
public:                                                // time - O(nlogn);
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            return true;
        }
        return false;

    }
};
//using hash map checking all the letters size and reducing it to zero - O(n)
class Solution {
public:
    bool isAnagram(string s, string t) {
         unordered_map<char, int> count;

        for (auto x : s) {
            count[x]++;
        }
        
        for (auto x : t) {
            count[x]--;
        }
        // Check if any character has non-zero frequency
        for (auto x : count) {
            if (x.second != 0) {
                return false;
            }
        }
        
        return true;
    }
};
