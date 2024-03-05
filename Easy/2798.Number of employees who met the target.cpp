class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count=0;
        for(int hour:hours){
            if(hour>=target){
                count++;
            }
        }
        return count;
    }
};
//foreach loop is speeder than normal for loop
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count=0;
        for(int i=0;i<hours.size();i++){
            if(hours[i]>=target){
                count++;
            }
        }
        return count;
    }
};
