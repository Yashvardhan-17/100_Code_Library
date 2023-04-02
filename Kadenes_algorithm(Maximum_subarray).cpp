//question: https://leetcode.com/problems/maximum-subarray/

//solution:
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n=nums.size();
        int sum=0;
        int c=0;

        for(int i=0;i<n;i++)
        {
            if(nums[i]>=0)
            {
                c++;
                sum+=nums[i];
            }
        }

        if(c==n)
        {
            return sum;
        }


        c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<=0)
            {
                c++;
            }
        }
        
        if(c==n)
        {
            sort(nums.begin(),nums.end());
            return nums.back();
        }


        int cursum=0;
        int maxsum=INT_MIN;


        for(int i=0;i<n;i++)
        {
            cursum+=nums[i];
            if(cursum>0)
            {
                maxsum=max(cursum,maxsum);
            }
            else
            {
                cursum=0;
            }
        }

        return maxsum;
        
    }
};