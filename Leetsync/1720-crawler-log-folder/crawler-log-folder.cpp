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