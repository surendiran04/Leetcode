class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
        vector<int> s3;
        for(auto it=s1.begin();it!=s1.end();it++){
            for(auto i=s2.begin();i!=s2.end();i++){
                if(*(it)==*(i)){
                    s3.emplace_back(*it);
                }
            }
        }
        return s3;
    }
};
//more efficient code
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1(nums1.begin(),nums1.end());
        vector<int> result;
        for(int num :nums2){
                if(set1.count(num)){
                    result.push_back(num);
                    set1.erase(num);
                }
        }
        return result;
    }
};
