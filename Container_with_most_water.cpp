//question link: https://leetcode.com/problems/container-with-most-water/

//solution:
class Solution {
public:
    int maxArea(vector<int>& height) {

        int s = 0;
        int e = height.size()-1;
        int area = 0;
        int mini = 0;

        while(s<e)
        {
            area = (e-s)*(min(height[s],height[e]));
            mini = max(area,mini);

            if(height[s]<height[e])
            {
                s++;
            }
            else
            {
                e--;
            }
        }

        return mini;
        
    }
};