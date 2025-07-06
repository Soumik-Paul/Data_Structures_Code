#include<bits/stdc++.h>
using namespace std;
main()
{
     int row,col,i,j;
     row=3;
     col=4;

     int arr[row][col]={      {1,2,3,4}, {5,6,7,8} , {9,10,11,12}  };
     for(i=0; i <row; i++)
     {
          for(j=0;j<col;j++)
          {
               cout<<arr[i][j]<<" ";
          }
          cout<<endl;
     }




     // maximum row sum
     int maxsum = -1 , rowsum;
     for(i=0; i <row; i++)
     {
          rowsum = 0;
          for(j=0;j<col;j++)
          {
               rowsum= rowsum + arr[i][j];

          }
          cout<<"Sum of row "<<i<<" is "<<rowsum<<endl;
          maxsum = max(maxsum,rowsum);

     }
     cout<<"Maximum row sum "<<maxsum<<endl;


     // colsum;
     cout<<endl;
     int maxsum2=-1, colsum;
     for(j=0;j<col;j++)
     {
          colsum=0;
          for(i=0;i<row;i++)
          {
               colsum = colsum + arr[i][j];

          }
          maxsum2= max(maxsum2,colsum);

     }
     cout<<endl;
     cout<<"Maximum Column sum is : "<<maxsum2<<endl;










}
