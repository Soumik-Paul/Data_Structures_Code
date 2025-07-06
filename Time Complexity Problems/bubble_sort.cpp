#include<bits/stdc++.h>
using namespace std;
main()
{
     int arr[7]={4,7,9,1,2,6,5};
     int n= sizeof(arr) / sizeof(int);
     int i,j;
     for(i=0;i<= n-2;i++)
          for(j=0;j<n-i-1;j++)
               if(arr[j]>arr[j+1])
                    swap(arr[j],arr[j+1]);

     for(int value : arr)
          cout<<value<<" ";
}
