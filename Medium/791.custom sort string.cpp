// the condition failed
//order = "kqep",s ="pekeq, "Output"kqepe", Expected"kqeep" the order of the appending was missed by multiple occurence
class Solution { 
public:
    string customSortString(string order, string s) {
        string ans="";
        for(auto c:order){
            size_t x=s.find(c); //find gives the index of the char orelse -1
            if(x!=string::npos){ //npos means -1
                ans=ans+c;
                s.erase(x,1); //erasing the added char from s string .erase(x,1)- deletes only the specifix elements 
                                                                      //orelse it'll delete all the elements after that index
            }
        }
       for(auto c:s){ //we can also append via ans=ans+s
           ans=ans+s; //appending non-added elements if any
       }
        return ans;
    }
};
//passed all the testcases
class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        unordered_map<char,int> map;
        for(char ch:s){ //storing  the freq
            map[ch]++;
        }
        for(auto c:order){
            int x=map[c];
            if(x!=0){
                for(int i=0;i<x;i++){ //printing freq times
                    ans=ans+c;
                }
                map.erase(c);
            }
        }
        for(auto it:map){
            for (int i = 0; i < it.second; i++) { 
            ans=ans+it.first; // appending the rest of char freq times
            }
        }
        return ans;
    }
};
//another easy logic from leetcode soln
class Solution {
public:
    string customSortString(string order, string s) {
        string custom;
        vector<int> freq(26, 0);
        for (char c: s) {
            freq[c -'a']++;
        }
        for (char c: order) {
            while (freq[c -'a']) { //char-'a' gives the index between 0 and 26 coz, asciiz value a is 97 and c is 99 so 99-92=2
                custom += c;
                freq[c -'a']--;
            }
        }
        for (int i = 0; i < 26; i++) {
            while (freq[i]) {
                custom += i + 'a';
                freq[i]--;
            }
        }
        return custom;
    }
};
