//if the array consists of three consecutive odd numbers then return true else false
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        for(int n:arr){
            if(n&1){
                count++;
            }
            else{
                count=0;
            }
            if(count==3){
                return true;
            }
        }
        return false;
    }
};
