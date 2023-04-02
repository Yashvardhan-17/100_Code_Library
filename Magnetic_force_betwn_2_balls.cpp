//question link: https://leetcode.com/problems/magnetic-force-between-two-balls/

//solution:
class Solution {
public:
   bool possible(int n, int k, vector<int> stalls,int mid)
    {
        int cowcount = 1;
        int lastpos = stalls[0];
        
        for(int i=0;i<n;i++)
        {
            if(stalls[i]-lastpos>=mid)
            {
                cowcount++;
                if(cowcount==k)
                {
                    return true;
                }
                lastpos = stalls[i];
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
    
        // Write your code here
        int n = position.size();
        sort(position.begin(),position.end());
        int s = 0;
        int maxi = -1;
        for(int i=0;i<n;i++)
        {
            maxi = max(maxi,position[i]);
        }
        
        int e = maxi;
        int ans = -1;
        int mid = s+(e-s)/2;
        
        while(s<=e)
        {
            if(possible(n,m,position,mid))
            {
                ans = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s+(e-s)/2;
        }
        
        return ans;
    }
};