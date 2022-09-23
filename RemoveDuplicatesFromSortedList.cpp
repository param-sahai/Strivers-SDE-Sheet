class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=1)
            return nums.size();
        int n=nums.size();
        int i=0,j=1;
        for(;j<n;j++){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i+=1;
            }
        }
        return (i+1);
    }
};