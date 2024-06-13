class Solution {
public:
    bool isValid(string word) { //this code doesn't work
        string vowels1 = "aeiou";
        string vowels2="aeiou";
        transform(vowels2.begin(), vowels2.end(),vowels2.begin(), ::toupper);
        string consonants1="bcsfghjklmnpqrstvwxyz";
        string consonants2="bcsfghjklmnpqrstvwxyz";
        transform(consonants2.begin(), consonants2.end(),consonants2.begin(), ::toupper);
        string allowed=vowels1+vowels2+consonants1+consonants2+"0123456789";
        if(word.length()<3){
            return false;
        }
        bool has_vowels=false;
        bool has_consonants=false;
        for(char c : word){
            if(allowed.find(c)==string::npos){
                return false;
            }
            if(vowels1.find(c)!=string::npos || vowels2.find(c)!=string::npos){
                has_vowels=true;
            }
            if(consonants1.find(c)!=string::npos || consonants2.find(c)!=string::npos){
                has_consonants=true;
            }
        }
        return (has_vowels && has_consonants);
    }
};
//beats 100%
class Solution {
public:
    bool isValid(string word) {
        string vowels = "aeiouAEIOU";
        string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
        string digits = "0123456789";
        string allowed = vowels + consonants + digits;
        if (word.length() < 3) {
            return false;
        }
        bool has_vowels = false;
        bool has_consonants = false;
        for (char c : word) {
            if (allowed.find(c) == string::npos) {
                return false;
            }
            if (vowels.find(c) != string::npos) {
                has_vowels = true;
            }
            if (consonants.find(c) != string::npos) {
                has_consonants = true;
            }
        }
        return (has_vowels && has_consonants);
    }
};
