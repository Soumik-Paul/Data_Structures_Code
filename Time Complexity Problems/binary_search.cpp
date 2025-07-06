#include<bits/stdc++.h>
using namespace std;
main()
{
     vector<int> v= {10,15,20,25,33,36,45,48,50,55,60};
     int n= v.size();
     int s ,e ,mid;
     s=0;
     e= n-1;
     int target, index=-1;
     cin>>target;
     while(s<=e)
     {
          mid = (s+e)/ 2 ;
          if(v[mid]== target)
              {
                    index = mid ;
                    break;
              }
          else if(v[mid] <target)
               s= mid + 1;
         // else if(v[mid]>target)
          else
               e = mid - 1;

     }
     cout<<"The number "<<target<<" is in index "<< index<<endl;










}
