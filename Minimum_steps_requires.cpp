//question: https://practice.geeksforgeeks.org/problems/6a1b365b520f10c8a29b533eb72951b4b4237b57/1

//solution:
vector<int> v;
    int n=str.length();
    
     for (int i = 0;i<n; i++) {
 
        // Counting occurrences of s[i]
        int count = 1;
        while (str[i] == str[i + 1] && i<n-1) {
            i++;
            count++;
        }
        // cout << str[i] << count << " ";
        if(str[i]=='a')
        {
            v.push_back(count);
        }
        else if(str[i]=='b')
        {
            v.push_back(-count);
        }
    }
    
    int vsize=v.size();
    int p=0,ng=0;
    
    for(int i=0;i<vsize;i++)
    {
        if(v[i]>0)
        {
            p++;
        }
        else
        {
            ng++;
        }
    }
    return min(p,ng)+1;