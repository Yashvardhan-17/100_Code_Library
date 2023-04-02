// question link : https://leetcode.com/problems/unique-binary-search-trees/

//solution:
class Solution {
public:
    int numTrees(int n) {

        long int res = 1;

        for(int i=0;i<n;i++)
        {
            res = res * (2*n - i);
            res /= (i+1);
        }

        return res/(n+1);
        
    }
};