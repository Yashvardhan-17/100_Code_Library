//question link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

//solution:
class Solution {
public:

bool ispossible(vector<int> arr,int n,int m,int mid)
{
    int studentcount =1;
    int pagecount = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]+pagecount<=mid)
        {
            pagecount= pagecount+ arr[i];
        }
        else
        {
            studentcount++;
            if(studentcount>m || arr[i]>mid)
            {
                return false;
            }

            pagecount = arr[i];
        }
    }
    return true;
}
int shipWithinDays(vector<int>& weights, int days) {
     int s = 0;
     int n  = weights.size();
     int e = 0;
     for(int i=0;i<n;i++)
     {
        e = e + weights[i];
     }
     int mid = s+(e-s)/2;
     int ans =-1;

     while(s<=e)
     {
        if(ispossible(weights,n,days,mid))
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
         mid = s+(e-s)/2;

     }

     return ans;
        
    }
};