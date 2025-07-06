#include<bits/stdc++.h>
using namespace std;
main()
{
     int i,j,n,sum=0;
     n=3;
     int arr[n][n] = {  {1,2,3} , {4,5,6} , {7,8,9} } ;
     for(i=0;i<n;i++)
     {
          for(j=0;j<n;j++)
          {
               if(i==j)
                    sum+= arr[i][j];
               else if(i+j == n-1)
                    sum+= arr[i][j];
          }
     }
     cout<<"The diagonal sum is "<<sum<<endl;
}
