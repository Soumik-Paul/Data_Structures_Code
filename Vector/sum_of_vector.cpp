#include<bits/stdc++.h>
using namespace std;
main()
{
     int i,n,x;
     cin>>n; // no of inputs
     vector<int>v;
     for(i=0;i<n;i++)
     {
          cin>>x;
          v.push_back(x);
     }
     int sum = 0;
     // now there are two ways
    /* First one
     for(i=0;i<v.size();i++)
          sum = sum + v[i];
          */
     // second one
     for(int value : v)
          sum = sum + value ;

     cout<<"The sum is "<<sum<<endl;
}
