#include<bits/stdc++.h>
using namespace std;
int givepivot(int arr[],int s, int e)
{
     int cur= arr[e]; int ind= s-1;
     for(int i=s;i<=e;i++)
     {
          if(arr[i]<=cur)
          {
               ind++;
               swap(arr[i],arr[ind]);
          }
     }
     return ind;

}
void quicksort(int arr[],int s, int e)
{
     if(s<e)
     {
          int pivot = givepivot(arr,s,e);
          quicksort(arr,s,pivot-1);
          quicksort(arr,pivot+1,e);
     }
}
main()
{
     int arr[] = {10,20,25,22,30,45,35,21};
     int n = sizeof(arr)/ sizeof(int);
     int s=0, e=n-1, pivot;
     quicksort(arr,s,e);
     for(int x:arr)
          cout<<x<<" ";
}
