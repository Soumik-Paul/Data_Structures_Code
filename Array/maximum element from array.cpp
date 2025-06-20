#include<bits/stdc++.h>
using namespace std;
main()
{
     int n; // number of element you want  in array
     cin>>n;

     int arr[n]; // array of n size
     for(int i=0;i<n;i++)
          cin>>a[i];
     int boro, position;
     boro = INT_MIN; // first you take the -2^31 as the boro number
     for(int i=0;i<n;i++)
     {
          if(boro<arr[i]) // if any bigger number comes in array
          {
               boro = arr[i]; // we say the bigger number is the highest number
               position = i;
          }
     }
     cout<<"The number is "<<boro<<" at position "<<position<<endl;
}

