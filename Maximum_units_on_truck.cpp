//question: https://leetcode.com/problems/maximum-units-on-a-truck/

//solution: 
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        int n = boxTypes.size();

        for(int i=0;i<n;i++)
        {
            swap(boxTypes[i][0],boxTypes[i][1]);
        }

        sort(boxTypes.begin(),boxTypes.end());

        int res = 0;
        int sum = 0;

        for(int i=n-1;i>-1;i--)
        {
            sum = sum + boxTypes[i][1];
            if(sum<=truckSize)
            {
                res = res + (boxTypes[i][0]*boxTypes[i][1]);
            }
            else
            {
                sum = sum - boxTypes[i][1];
                sum = truckSize - sum;
                res = res + (sum*boxTypes[i][0]);
                break;
            }
        }
        return res;
        
    }
};