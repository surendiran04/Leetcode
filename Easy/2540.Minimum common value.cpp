//brute force approach - time limit exceeded  
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums1.size();i++){  // time complexity - O(n^m) 
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    return nums1[i];
                }
            }
        }
        return -1;
    }
};
//optimised the time complexity to O(nlogm) 
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int mid;
        for (int i = 0; i < nums1.size(); i++) {
            int l = 0, h = nums2.size() - 1;
            while (l <= h) {
                mid = l + (h - l) / 2;
                if (nums2[mid] == nums1[i]) {
                    return nums2[mid];
                } else if (nums2[mid] < nums1[i]) {
                    l = mid + 1;
                } else {
                    h = mid - 1;
                }
            }
        }
        return -1;
    }
};
