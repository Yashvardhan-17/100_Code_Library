//question: https://leetcode.com/problems/unique-number-of-occurrences/

//solution: 
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        
        int count = 1;
        vector<int> a;
        
        
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]!=arr[i+1]){
                a.push_back(count);
                count = 1;
            }
            else{
                count++;
            }
        }
        a.push_back(count);
        sort(a.begin(),a.end());
        
        for(int i=0;i<a.size()-1;i++){
            if(a[i]==a[i+1]){
                return false;
            }
        }
        return true;
    }
};