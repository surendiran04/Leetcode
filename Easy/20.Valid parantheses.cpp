class Solution {
public:
    bool isValid(string s) {
        stack<char> v;
        for(char c:s){
            if(c=='(' || c=='{' || c=='['){
                v.push(c);
            }
            else{
                if(v.empty()){
                    return false;
                }
                char top=v.top();
                v.pop();
                if( (c==')' && top!='(') || (c==']' && top!='[') || (c=='}' && top!='{') ){ //the poped elements needs to be the opposite paranthesis,else result will be false
                    return false;
                }
            }
        }
        return v.empty();
    }
};
