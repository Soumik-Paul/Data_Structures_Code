// Time complexity o(n^2)
#include<bits/stdc++.h>
using namespace std;
main()
{
     vector<int> v = {1,2,-3,4,5,-4};
     int n= v.size();

     int i,j,ans=0, sum=0;
     for(i=0;i<n;i++) // n times
     {
          sum=0;
               for(j=i;j<n;j++) // n times
               {
                    sum = sum + v[j];
                    ans = max(ans, sum);
               }
     }
     cout<<"The maximum subarray sum is "<<ans<<endl;
}
