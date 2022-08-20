// https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_3846774?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=3
#include <bits/stdc++.h> 
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    unordered_map<int,bool> RowVisited, ColVisited;
    vector<int> r,c;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]==0){
                if(!RowVisited[i]){
                    r.push_back(i);
                    RowVisited[i] = true;
                }
                if(!ColVisited[j]){
                    c.push_back(j);
                    ColVisited[j] = true;
                }
            }
        }
    }
    for(auto row:r){
        for(int k=0;k<matrix[0].size();k++)
            matrix[row][k]=0;
    }
    for(int k=0;k<matrix.size();k++){
        for(auto col:c){
            matrix[k][col]=0;
        }
    }
}