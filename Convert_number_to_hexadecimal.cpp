//question: https://leetcode.com/problems/convert-a-number-to-hexadecimal/

//solution: 
class Solution {
public:
    string toHex(int num) {
    
        if(num == 0)
          return "0";

          unsigned int n = num;
          string res = "";

          while(n!=0)
          {
              int rem=0;
              string ch ;

              rem = n%16;

              if(rem<10)
              {
                  ch = rem + 48;
              }
              else
              {
                  ch = rem + 87;
              }
              n/=16;
              res= res + ch;
            
              
          }  

          reverse(res.begin(),res.end());

          return res;   
    }
};