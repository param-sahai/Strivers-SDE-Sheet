#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int>prev,curr;
        res.push_back({1});
        if(numRows==1) return res;
        res.push_back({1,1});
        if(numRows==2) return res;
        prev = {1,1};
        for(int k=1;k<=numRows-2;k++){
            curr.push_back(1);
            for(int i=1;i<prev.size();i++){
                curr.push_back(prev[i-1]+prev[i]);
            }
            curr.push_back(1);
            res.push_back(curr);
            prev = curr;
            curr = {};
        }
        return res;
    }
};