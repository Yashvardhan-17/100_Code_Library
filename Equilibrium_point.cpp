//question link: https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1?page=1&curated[]=1&sortBy=submissions

//solution:
Problems
Price Drop
Courses
Get Hired
Contests
POTD





























































Refresh

Time (IST)	Status	Lang	Test Cases	Code
2022-10-03 22:40:46	Correct	cpp	210 / 210	View
2022-10-03 22:36:11	Wrong	cpp	13 / 210	View
2022-10-03 22:30:07	Wrong	cpp	0 / 210	View
C++ (g++ 5.4)
Average Time: 15m




Custom Input
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long aux[n];
  
       long long sum=0;
    for(int i=0;i<n;i++){
       sum+=a[i];
       aux[i]=sum;
     }
  
  sum=0;
  for(int j=n-1;j>=0;j--){
      sum+=a[j];
      aux[j]-=sum;
      
      if(aux[j]==0){
          return j+1;
      }
  }
  return -1;
    }

};