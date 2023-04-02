// question:https://leetcode.com/problems/longest-word-in-dictionary-through-deleting/

//solution: 
class Solution {
public:
    bool search(string s1,string s2)
    {
      int n = s1.length(),m = s2.length();
       int i = 0;
       int j = 0;
           while(j<n)
           {
               if(s1[j] == s2[i])
               {
                  i++;
                  if(i == m)
                  {
                      return true;
                  }
               }
               j++;
           }

       return false;
    }
    string findLongestWord(string s, vector<string>& dictionary) {

        sort(dictionary.begin(),dictionary.end());
        int index=-1;
        int length = 0;
        
        for(int i=0;i<dictionary.size();i++)
        {
            if(search(s,dictionary[i]))
            {

                if(dictionary[i].length()>length)
                {
                    index = i;
                    length = dictionary[i].length();

                }              
                
            }
        }

        if(index == -1)
        {
            return "";
        }

        return dictionary[index];
    }
};