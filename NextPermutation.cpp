class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=0;
        int n = nums.size();
        for(i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1])
                break;
        }
        if(i==0)
            reverse(nums.begin(), nums.end());
        else{
            cout<<"i: "<<i<<"\n";
        sort((nums.begin()+(i)),nums.end());
        for(int k=i;k<nums.size();k++){
            if(nums[k]>nums[i-1]){
                swap(nums[k],nums[i-1]);
                break;
            }
        }
        }
        
    }
};