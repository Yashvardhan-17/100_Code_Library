//question link: https://leetcode.com/problems/maximum-69-number/

// solution
class Solution {
public:
    int maximum69Number (int num) {
        int temp = num;
        vector<int> a;

        while(temp!=0){
            int rem = temp%10;
            a.push_back(rem);
            temp = temp/10;
        }

        for(int i=a.size()-1;i>=0;i--){
            if(a[i]==6){
                a[i]=9;
                break;
            }
        }
        
        int sum=0;
        for(int i=a.size()-1;i>=0;i--){
            sum = sum*10+a[i];

        }

        return sum;
        
    }
};