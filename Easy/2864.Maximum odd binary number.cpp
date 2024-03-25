class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.rbegin(),s.rend());
        for(int i = s.size()-1;i>=0;i--){
            if(s[i]=='1')swap(s[i],s[s.size()-1]);
        }
        return s;
    }
};
//both are the codes are efficient
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n1 = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                n1++;
            }
        }
        int n =s.length()-n1;
        string ans=string(n1-1,'1')+string(n,'0')+'1';
        return ans;
    }
};
