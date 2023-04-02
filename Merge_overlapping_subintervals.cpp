//question:  https://leetcode.com/problems/merge-intervals/

//solution:

class Solution {
public:
    static bool sortcol(vector<int> v1,vector<int> v2)
    {
        return v1[0]<v2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end(),sortcol);
        int n=intervals.size();

        if(n==1)
        {
            return intervals;
        }  

        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        int anscounter=0;

        for(int i=1;i<n;i++)
        {
            if(ans[anscounter][1]>=intervals[i][0])
            {
                ans[anscounter][1]=max(ans[anscounter][1],intervals[i][1]);
            }
            else
            {
                ans.push_back(intervals[i]);
                anscounter++;
            }
        }
        return ans;     
    }
};