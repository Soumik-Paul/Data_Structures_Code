#include<bits/stdc++.h>
using namespace std;
main()
{
   int i,n;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
     cin>>arr[i];

   int sum =0;
   for(i=0;i<n;i++)
     sum+= arr[i];

   cout<<"The sum is "<<sum<<endl;
   float avg = sum*1.0/n;
   cout<<"The average is "<<avg;

}
