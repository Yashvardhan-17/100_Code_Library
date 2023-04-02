//question link: https://leetcode.com/problems/reverse-integer/

//solution: 
class Solution {
public:
    int reverse(int x) {
        
        long num=0;
        int rem;
        
        while(x!=0){
            rem=x%10;
            num=num*10+rem;
            x=x/10;
           
         }
        if(num>-2147483648 && num<=2147483647)
            return num;
        else
            return 0;
        
        
    }
};