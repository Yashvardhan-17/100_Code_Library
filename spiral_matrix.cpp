//question link: https://leetcode.com/problems/spiral-matrix/

//solution:
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int n = matrix.size();
        int m = matrix[0].size();

        int count = 0;
        int total = m*n;

        int startrow = 0;
        int startcol = 0;
        int endrow= n-1;
        int endcol = m-1;

        // cout<<n<<m;

        while(count<total)
        {
           for(int i=startcol;count<total && i<=endcol;i++)
           {
                ans.push_back(matrix[startrow][i]);
                count++;
           }
            startrow++;

           for(int i=startrow;count<total && i<=endrow;i++)
           {
                ans.push_back(matrix[i][endcol]);
                count++;
           }
            endcol--;
           for(int i=endcol;count<total && i>=startcol;i--)
           {
                ans.push_back(matrix[endrow][i]);
                
                count++;
           }
           endrow--;
           for(int i=endrow;count<total && i>=startrow;i--)
           {
                ans.push_back(matrix[i][startcol]);
                
                count++;
           }
           startcol++;
        }
        
        return ans;
    }
};