//question link: https://leetcode.com/contest/biweekly-contest-101/problems/form-smallest-number-from-two-digit-arrays/

//solution: 
class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        
        int l1=nums1.size();
        int l2=nums2.size();
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        if(l1==0)
        {
           return nums2[0];
        }
        
        if(l2==0)
        { 
            return nums1[0];
        }
        
            
        for(int i=0;i<l1;i++)
        {
           for(int j=0;j<l2;j++)
           {
               if(nums1[i]==nums2[j])
               {
                   return nums1[i];
               }
           }
        }
        
        if(nums1[0]>nums2[0])
        {
            return nums2[0]*10+nums1[0];
        }
        else
        {
            return nums1[0]*10+nums2[0];
        }
    }
};