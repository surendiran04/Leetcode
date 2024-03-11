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
                s.erase(x,1); //erasing the added char from s string
            }
        }
       for(auto c:s){ //we can also append via ans=ans+s
           ans=ans+s; //appending non-added elements if any
       }
        return ans;
    }
};
