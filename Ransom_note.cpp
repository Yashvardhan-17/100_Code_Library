//question: https://leetcode.com/problems/ransom-note/

//solution: 
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int b[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        
        int len_r=ransomNote.length(),len_m=magazine.length();
        
        
        for(int i=0;i<len_r;i++){
            a[ransomNote[i]-97]++;
            
        }
        
        for(int i=0;i<len_m;i++){
            if(a[magazine[i]-97]!=0){
                b[magazine[i]-97]++; 
            }
           
            
        }
        
        for(int i=0;i<26;i++){
            if((a[i]!=0 && b[i]==0) || a[i]>b[i] )
            {
                return false;
            }
        }
        return true;
        
    }
};