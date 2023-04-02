//question: https://www.codingninjas.com/codestudio/problems/893046?topList=striver-sde-sheet-problems

//solution:
#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.

    int i=n-2;
    int first=0;
    int second=0;
    while(i>-1)
    {
       if(permutation[i]<permutation[i+1])
       {
           first=i;
           break;
       }
       i--;
    }
    if(i==-1)
    {
        sort(permutation.begin(),permutation.end());
        return permutation;
    }

    i=n-1;
    int ind=INT_MAX;
    while(i>first)
    {
        if(permutation[first]<permutation[i])
        {
           if(ind>permutation[i])
           {
               second=i;
               ind=permutation[i];
           }
        }
        i--;
    }
    swap(permutation[first],permutation[second]);

    sort(permutation.begin()+first+1,permutation.end());

    return permutation;
}
