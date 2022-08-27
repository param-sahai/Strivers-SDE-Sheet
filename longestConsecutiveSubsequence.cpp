class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int prev = 0, mx=-1;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(i==0 || nums[i]==(nums[i-1]+1)){
                res.push_back(nums[i]);
            }
            else if(nums[i]==nums[i-1])
                continue;
            else{

                mx = (int)max((int)res.size(),(int)mx);
                res.clear();
                res.push_back(nums[i]);
            }
        }
        mx = (int)max((int)res.size(),(int)mx);
        return mx;
    }
};