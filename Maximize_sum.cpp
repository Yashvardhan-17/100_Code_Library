//question: https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-96/problems/

//solution:
class Solution:
    def maximumSum(self, n, A):
        # code here
        i=1
        sum=0
        A.sort()
        while(i<=n):
            sum=sum+(i*A[i-1])
            i=i+1
        
        return sum
            