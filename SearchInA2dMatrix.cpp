class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i = 0;
        int start = 0;
        int end = n-1;
        int mid = 0;
        while(i<=(m-1)){
            if(target < matrix[i][start])
                return false;
            else if(target > matrix[i][end])
                i++;
            else{
                while(start<=end){
                    mid = (start + end)/2;
                    if(target == matrix[i][mid])
                    {
                        return true;
                    }
                    else if(target > matrix[i][mid]){
                        start = mid+1;
                    }
                    else if(target < matrix[i][mid]){
                        end = mid-1;
                    }
                }
            }
        }
        return false;
    }
};