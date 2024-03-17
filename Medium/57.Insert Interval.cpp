class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inv, vector<int>& ninv) {
        vector<vector<int>>ans;
        int start=ninv[0],end=ninv[1];
        bool inserted=false;
        for(int i=0;i<size(inv);i++){
            int cstart=inv[i][0],cend=inv[i][1];
            
            if(cend<start || inserted){ //inserted indicates that the new interval is merged in its crt position 
                ans.push_back({cstart,cend}); //inserts when the newInternal doesn't comes b/w this case
              
                continue; //*continue skips the rest of the code and starts from the next iteration from the beginning
            }
            start=min(start,cstart); //finding the new small element to point at the 0th index
            if(end<cstart){   //the newInterval comes before the current interval
                ans.push_back({start,end});
                ans.push_back({cstart,cend});
                inserted=true; //the newInterval is inserted in its position
                continue;
            }
            if(end<=cend){ //the newInterval[1] comes within the currentInterval[i][1]
                ans.push_back({start,cend}); 
                inserted=true;  //the newInterval is inserted in its position             
            }
        }
        if(!inserted){
            ans.push_back({start,end});
        }
         return ans;
    }
};
//1st code is more optimised approach
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> merged;
        int i = 0;

        while (i < intervals.size() && intervals[i][1] < newInterval[0]) { //when the newInterval doesn't comes within the range of the current interval
            merged.push_back(intervals[i]);
            i++;
        }

        while (i < intervals.size() && intervals[i][0] <= newInterval[1]) {
            newInterval = {min(newInterval[0], intervals[i][0]), max(newInterval[1], intervals[i][1])}; 
            i++;
        }
        merged.push_back(newInterval);

        while (i < intervals.size()) { //after the newInterval is inserted in its crt position
            merged.push_back(intervals[i]);
            i++;
        }

        return merged;
    }
};
