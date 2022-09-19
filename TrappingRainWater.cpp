#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
      int left = 0, right = height.size()-1, leftmax = 0, rightmax = 0;
      int res = 0;
      while(left<=right){
        if(height[left]<=height[right]){
            if(height[left]>=leftmax)
            leftmax=height[left];
            else
            res+=maxleft - height[left];
            left++;
        }
        else
        {
            if(height[right]>=rightmax)
            rightmax = height[right];
            else
            res+=rightmax - height[right];
            right--;
        }
      }  
      return res;
    }
};