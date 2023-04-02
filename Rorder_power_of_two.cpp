//question: https://leetcode.com/problems/reordered-power-of-2/

//solution:
class Solution {
public:
    string sorted(int num){
        string str=to_string(num);
            
            sort(str.begin(),str.end());
        return str;
    }
    
    bool reorderedPowerOf2(int n) {
        string N_str=sorted(n);
        for(int i=0;i<=30;i++){
            if(N_str==sorted(1<<i)) 
                return true;
    
        }
        return false;
    }
};
