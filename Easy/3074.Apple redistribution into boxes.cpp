class Solution {  //asked in apple interview
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int appleSum=0;
        for(int i=0;i<apple.size();i++){
            appleSum+=apple[i];
        }
        sort(capacity.begin(),capacity.end(),greater<int>()); //sorting in descending order
        int capacitySum=0;
        for(int j=0;j<capacity.size();j++){
            capacitySum+=capacity[j];
            if(capacitySum-appleSum>=0){ //adding capacity to capacitySum until it is enough to hold all the apples
                return j+1; 
            }
        }
        return -1;
    }
};
