// question link : https://leetcode.com/problems/search-in-rotated-sorted-array/

//solution:
class Solution {
public:
    int findpivot(vector<int> nums,int n)
    {
        int s = 0;
        int e = n-1;
        int mid = s+(e-s)/2;

        while(s<e)
        {
            if(nums[mid]>=nums[0])
            {
                s = mid+1;
            }
            else
            {
                e = mid;
            }
             mid = s+(e-s)/2;
        }

        return e;
    }
    int binary(vector<int> nums,int s,int e,int k)
    {
        int mid = s+(e-s)/2;

        while(s<=e)
        {
            if(nums[mid]==k)
            {
                return mid;
            }

            if(k>nums[mid])
            {
                s = mid+1;

            }
            else
            {
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }

        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = findpivot(nums,n);
        

        if(target>=nums[pivot] && target<=nums[n-1])
        {
            return binary(nums,pivot,n-1,target);
        }
        else
        {
            return binary(nums,0,pivot-1,target);
        }

        return -1;
        
    }
};