//question link: https://leetcode.com/problems/median-of-two-sorted-arrays/

//solution:
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        while(!nums2.empty()){
            nums1.push_back(nums2.back());
            nums2.pop_back();
        }
        
        sort(nums1.begin(),nums1.end());
        
        
        int i=nums1.size();
        
        if(i%2!=0){
            return nums1[(i-1)/2];
        }
        else{
            int a,b;
            a=nums1[(i-1)/2];
            b=nums1[i/2];
            
            return float (a+b)/2;
        }
        
        return 0;
    }
};