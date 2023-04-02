//question link: https://leetcode.com/problems/add-binary/

//solution: 
class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.size()-1;
        int n = b.size()-1;
        int carry =0;

        string res = "";

        while(m>-1 && n>-1)
        {
            if(a[m]=='0'&& b[n]=='0')
            {
                if(carry)
                {
                   res = res + '1';
                   carry = 0;
                }
                else
                {
                    res = res + '0';
                    carry =0;
                }
                
            }
            else if(a[m]=='1'&& b[n]=='1')
            {
                if(carry)
                {
                   res = res + '1';
                   carry = 1;
                }
                else
                {
                    res = res + '0';
                    carry =1;
                }
                
            }
            else
            {
                if(carry)
                {
                   res = res + '0';
                   carry = 1;
                }
                else
                {
                    res = res + '1';
                    carry =0;
                }
            }
            n--;
            m--;
        }

       
           while(m>-1)
           {
               if(a[m]=='1')
               {
                   if(carry)
                   {
                       res = res + '0';
                       carry = 1;
                   }
                   else
                   {
                       res = res + '1';
                       carry = 0;
                   }
               }
               else
               {
                   if(carry)
                   {
                       res = res + '1';
                       carry = 0;
                   }
                   else
                   {
                       res = res + '0';
                       carry = 0;
                   }
               }
               m--;
           }
        

        
           while(n>-1)
           {
               if(b[n]=='1')
               {
                   if(carry)
                   {
                       res = res + '0';
                       carry = 1;
                   }
                   else
                   {
                       res = res + '1';
                       carry = 0;
                   }
               }
               else
               {
                    if(carry)
                   {
                       res = res + '1';
                       carry = 0;
                   }
                   else
                   {
                       res = res + '0';
                   }
                     
               }
               n--;
           }
        

        if(carry)
        {
            res = res + '1';
        }

        reverse(res.begin(),res.end());

        return res;
        
    }
};