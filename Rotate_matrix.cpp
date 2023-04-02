//question: https://leetcode.com/problems/rotate-image/

//solution:
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int row=matrix.size();
        int col = matrix[0].size();

        
        int b=0;
        while(b<col/2)
        {
            for(int i=0;i<row;i++)
            {
                swap(matrix[i][b],matrix[i][col-b-1]);
            }
            b++;
        } 


        int rowindex = 0;
        int colindex= col-1;
        
        int count=row;

        while(rowindex<row && colindex>=0)
        {
            int p = 0;

            while(p<count)
            {
                swap(matrix[rowindex][colindex-p],matrix[rowindex+p][colindex]);
                p++;
            }
            count--;
            rowindex++;
            colindex--;
        } 
    }
};