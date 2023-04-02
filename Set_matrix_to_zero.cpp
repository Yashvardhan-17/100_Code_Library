//question: https://leetcode.com/problems/set-matrix-zeroes/

//solution:
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> row;
    set<int> col;
    int a=matrix.size();
    int b=matrix[0].size();
    
    for( int i=0 ; i< a ;i++){
        for(int j = 0 ; j < b ; j++ ){
            if(matrix[i][j]==0){
                row.insert(i);
                col.insert(j);
            }
        }
    }
    
    for( int i=0 ; i< a ;i++){
        for(int j = 0 ; j < b ; j++ ){
            if(row.count(i) || col.count(j)){
                matrix[i][j] = 0;
            }
        }
    }
    }
};