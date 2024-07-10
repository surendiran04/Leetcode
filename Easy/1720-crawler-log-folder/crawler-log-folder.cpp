class Solution {
public:
    int minOperations(vector<string>& logs) {
       int res = 0;
        for (const string& log : logs) {
            if (log == "../") {
                if (res > 0) {
                    res--;
                }
            } else if (log != "./") {
                res++;
            }
        }
        return res;
    }
};
class Solution { //stack approach
public:
    int minOperations(vector<string>& logs) {
        vector<string> paths_stack;

        for (const string& log : logs) {
            if (log == "../") {
                if (!paths_stack.empty()) {
                    paths_stack.pop_back();
                }
            } else if (log != "./") {
                paths_stack.push_back(log);
            }
        }

        return paths_stack.size();
    }
};
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int steps=0;
        int main=1;
        for(auto i:logs){
            if(i=="../"){
                if(main!=1){
                    steps--;
                }
                if(steps==0){
                    main=1; 
                }  
            }
            else if(i=="./"){
                if(steps!=0){
                    main=0;
                }
                continue;
            }
            else{
                main=0;
                steps++;
            }
        }
        return (steps<0)?0:steps;
    }
};
