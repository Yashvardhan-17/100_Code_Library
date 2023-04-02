// question link : https://leetcode.com/problems/sort-an-array/description/

//solution:
class Solution {
public:

    void merge(vector<int>& nums,int s,int e)
    {
        int mid = s+(e-s)/2;

        int l1 = mid-s+1;
        int l2 = e-mid;

        int arr1[l1];
        int arr2[l2];

        int arrayindex = s;
        for(int i=0;i<l1;i++)
        {
            arr1[i] = nums[arrayindex++];
        }

        arrayindex = mid+1;
        for(int j=0;j<l2;j++)
        {
            arr2[j] = nums[arrayindex++];
        }


        int index1=0,index2=0;
        arrayindex = s;
        while(index1<l1 && index2<l2)
        {
            if(arr1[index1]<arr2[index2])
            {
                nums[arrayindex++] = arr1[index1++];
            }
            else
            {
                nums[arrayindex++] = arr2[index2++];
            }
        }

        if(index1>l1)
        {
            while(index2<l2)
            {
                nums[arrayindex++] = arr2[index2++];
            }
        }
        else
        {
            while(index1<l1)
            {
                nums[arrayindex++] = arr1[index1++];
            }
        }

    }   
    void solve(vector<int> &nums,int s,int e)
    {
        if(s>=e)
        {
            return;
        }
        int mid = s+(e-s)/2;
        solve(nums,s,mid);
        solve(nums,mid+1,e);

        merge(nums,s,e);
    }
    vector<int> sortArray(vector<int>& nums) {

        int s=0;
        int e = nums.size()-1;
        solve(nums,s,e);
         return nums;
        
    }
};