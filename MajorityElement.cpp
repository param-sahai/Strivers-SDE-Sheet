class Solution {
public:
    int findMajority(vector<int> &v){
    int candidate = -1;
    int vote = 0;
    for(auto x:v){
        if(vote==0){
            candidate = x;
            vote++;
        }
        else if(candidate == x){
            vote++;
        }
        else
        vote--;
    }
    return candidate;
}
    int majorityElement(vector<int>& nums) {
        return findMajority(nums);
    }
};