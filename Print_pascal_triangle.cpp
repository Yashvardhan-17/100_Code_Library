//question: https://leetcode.com/problems/pascals-triangle/

//solution:

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> sol;
        sol.push_back({1});
        if(numRows==1)
        {
            return sol;
        }
        sol.push_back({1,1});
        if(numRows==2)
        {
            return sol;
        }      

        for(int i=3;i<=numRows;i++)
        {
            vector<int> v;
            for(int j=0;j<i;j++)
            {
                 if(j==0 || j==i-1)
                 {
                     v.push_back(1);
                 }
                 else
                 {
                     v.push_back(sol[i-2][j]+sol[i-2][j-1]);
                 }
            }
            sol.push_back(v);
        }

        return sol;
        
    }
};