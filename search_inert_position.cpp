// question link:https://leetcode.com/problems/search-insert-position/

//solution:
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n = nums.size();

        int s = 0;
        int e = n;
        int mid;
        if(target>nums[e-1])
        {
            return e;
        }

        while(s<=e)
        {
             mid = s+(e-s)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            
            if(nums[mid]<target)
            {
                s = mid+1;
            }
            else
            {
                e = mid-1;
            }
           
        }
        return s;           
        
    }
};