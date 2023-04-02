//question: https://leetcode.com/problems/plus-one/

//solution:
class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        a=[]
        sum=0
        for i in digits:
            sum=sum*10+i
            
        sum=sum+1
        
        while(sum!=0):
            rem=sum%10
            a.append(rem)
            sum=sum/10
        a.reverse()
        return a
            
            
        