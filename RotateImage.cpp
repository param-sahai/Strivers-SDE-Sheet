class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         reverse(matrix.begin(),matrix.end());   
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix.size();j++){
                swap(matrix[j][i],matrix[i][j]);              
            }
        }
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                cout<<matrix[i][j]<<" ";              
            }
            cout<<"\n";
        }
    }
};