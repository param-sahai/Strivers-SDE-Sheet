class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>res;
        vector<int>v;
        int prev_start = intervals[0][0];
        int prev_end = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=prev_end)
            prev_end = max(prev_end, intervals[i][1]);
            else
            {
                v.push_back(prev_start);
                v.push_back(prev_end);
                prev_start = intervals[i][0];
                prev_end = intervals[i][1];
            }   
        }
        
        v.push_back(prev_start);
        v.push_back(prev_end);
        vector<int>vec;
        int count=0;
        for(auto x:v){
            vec.push_back(x);
            if(vec.size()==2){
                res.push_back(vec);
                vec.clear();
            }
        }
        return res;
    }
};