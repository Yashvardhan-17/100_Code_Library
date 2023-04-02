//question link: https://leetcode.com/contest/biweekly-contest-101/problems/find-the-substring-with-maximum-cost/

//solution: 
class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        
        
        
        int a[26];      
        for(int i=0;i<26;i++)
        {
            a[i]=i+1;
        }
        
        int vsize=vals.size();
        
        for(int i=0;i<vsize;i++)
        {
            a[chars[i]-'a']=vals[i];
        }
        
        
        int n=s.size();
        vector<int> nums;
        
        for(int i=0;i<n;i++)
        {
            nums.push_back(a[s[i]-'a']);
        }      
        
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
            // sort(nums.begin(),nums.end());
            return 0;
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