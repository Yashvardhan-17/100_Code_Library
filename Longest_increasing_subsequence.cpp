// question link :- https://leetcode.com/problems/longest-increasing-subsequence/description/


// solution
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int lis[n];
        for(int i=0;i<n;i++)
        {
            lis[i]=1;
        }
        int maxi=lis[0];

        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i] && lis[j]+1>lis[i])
                {
                    lis[i]=lis[j]+1;
                    maxi = max(maxi,lis[i]);
                }
            }
        }

        return maxi;
    }
};