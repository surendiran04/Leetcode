class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=0;i<m+n && j<n;i++){
            if(nums1[i]==0){
                nums1[i]=nums2[j];
                j++;
            }
        }
        sort(nums1.begin(),nums1.end());
    }
};
//both the codes are 100% efiicient 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};
