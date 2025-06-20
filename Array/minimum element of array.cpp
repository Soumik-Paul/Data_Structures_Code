#include<bits/stdc++.h>
using namespace std;
main()
{
     int arr[] = {1,-2,-3,4,10,7,6};
     int chuto, position;
     chuto = INT_MAX;
     for(int i=0;i<7;i++)
     {
          if(chuto>arr[i])
          {
               chuto = arr[i];
               position = i;
          }
     }
     cout<<"The number is "<<chuto<<" at position "<<position<<endl;
}
