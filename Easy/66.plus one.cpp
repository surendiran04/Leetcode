class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n=v.size();
        for(int i=n-1;i>=0;i--){
            if(i==n-1){ //add the last digit a one
                  v[i]++;
            }
            if(v[i]==10){ //if the last digit is 10 then add the previous digits by 1 and make the current digits as 0
                v[i]=0;
                if(i!=0){
                    v[i-1]++;
                }
                else{   //take 99 as number then to make it 100 this condition
                    v.push_back(0);
                    v[i]=1;
                }
            }
        }
        return v;
    }
};
