class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size = m+n;
        int i = m-1;
        int j = n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j])
            {
                nums1[size-1] = nums1[i];
                i--;
                size--;
            }
            else{
                nums1[size-1] = nums2[j];
                j--;
                size--;
            }
        }
        if(i==-1 && j>=0){
            do{
                nums1[size-1] = nums2[j];
                size--;
            }while(j--);
        }
    }
};