//question: https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?page=1&category[]=Arrays&curated[]=7&sortBy=submissions

//solution:


//User function Template for C++

void rotate(int arr[], int n)
{
    for(int i=0;i<n;i++){
        swap(arr[i],arr[n-1]);
    }
    
}