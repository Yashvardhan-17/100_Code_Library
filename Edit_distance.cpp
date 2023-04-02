// question link: https://leetcode.com/problems/edit-distance/

//solution:
class Solution {
public:
    int minDistance(string word1, string word2) {

        int l1=word1.length();
        int l2=word2.length();

        // if(l1==0 && l2==0)
        // {
        //     return 0;
        // }
        // else if(l1==0 )
        // {
        //     return l2;
        // }
        // else if(l2==0)
        // {
        //     return l1;
        // }

        int dp[l1+1][l2+1];

        for(int i=0;i<=l1;i++)
        {
            dp[i][0]=i;
        }

        for(int i=0;i<=l2;i++)
        {
            dp[0][i]=i;
        }


        for(int i=1;i<=l1;i++)
        {
            for(int j=1;j<=l2;j++)
            {
                if(word1[i]==word2[j])
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else
                {
                    int x=dp[i-1][j];
                    int y=dp[i-1][j-1];
                    int z=dp[i][j-1];

                    if(x<=y && x<=z)
                    {
                        dp[i][j]=x+1;
                    }
                    else if(y<=x && y<=z)
                    {
                        dp[i][j]=y+1;
                    }
                    else
                    {
                        dp[i][j]=z+1;
                    }
                }
            }
        }

        return dp[l1][l2];
        
    }
};