class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="";
        string s2="";
        for(auto s:word1){
            s1=s1+s;
        }
        for(auto s:word2){
            s2=s2+s;
        }
        return (s1.compare(s2)==0)?true:false; // == operator is bit slower when comapred with compare method
    }
};
