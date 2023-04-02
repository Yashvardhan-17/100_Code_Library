//question: https://leetcode.com/problems/count-binary-substrings/

//solution:
class Solution {
public:
    int countBinarySubstrings(string s) {

        int start = 0 , end = s.size();
        int count=0;

        for(int i=0;i<end-1;i++)
        {
            if(s[i]=='0' && s[i+1]=='1')
            {
                int back=i,front=i+1;
                while(back>=start && front<end && s[back]!='1' && s[front]!='0')
                {
                    if(s[back]!=s[front])
                    {
                        count++;
                    }
                     back--;
                     front++;

                }


            }
            else if(s[i]=='1' && s[i+1]=='0')
            {
                int back=i,front=i+1;
                while(back>=start && front<end && s[back]!='0' && s[front]!='1')
                {
                    if(s[back]!=s[front])
                    {
                        count++;
                    }
                    back--;
                    front++;

                }
            }

        }

        return count;


        
    }
};