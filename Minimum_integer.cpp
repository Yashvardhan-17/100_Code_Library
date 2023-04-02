//question:https://practice.geeksforgeeks.org/problems/1ccf56f107bcb24242469ea45c02f852165a2184/1

//solution:
class Solution {
  public:
    int minimumInteger(int N, vector<int> &A) {
        // code here
        long long sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
        }
        
        sort(A.begin(),A.end());
        
        for(int i=0;i<N;i++)
        {
            if(sum<=N*1ll*A[i])
            {
                return A[i];
            }
        }
    }
};
