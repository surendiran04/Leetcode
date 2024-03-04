class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score=0;
        int maxscore=0;
        int n=tokens.size();
        if(tokens.empty() || power<tokens[0]){
            return 0;
        }
        int i=0,j=n-1;
        while(i<=j){
            if(power>=tokens[i]){
                score++;
                power=power-tokens[i];
                i++;
                maxscore=max(score,maxscore);
           }
            else if(score>0 && power<tokens[i]){
                score--;
                power=power+tokens[j];
                j--;
            }
            else{
                break;
            }
        }
        return maxscore;


    }
};
