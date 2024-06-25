class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {  //base logic
        int count=0;
        for (int i = 0; i < words.size();i++) {
            string cur_word = words[i];
            int k=0;
            for (int j = 0; j < pref.length() && cur_word.length()>=pref.length(); j++) {
               if(cur_word[j]==pref[j]){
                 k++;
               }
            }
            if(k==pref.length()){
               count++;
            }
        }
        return count;
    }
};
