#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> v;
     v.push_back(10); v.push_back(20); v.push_back(30);
     cout<<v.front()<<endl; //10
     cout<<v.back()<<endl; //30
     v.pop_back(); //30 will be deleted
     cout<<v.back()<<endl; //20

     // currently vector is like 10,20
     v.insert(v.begin(),5); // it will add 5 at the beginning

     for(int value: v)
          cout<<value<<" ";
     cout<<endl;
     // 5 10 20

     v.insert(v.begin()+2,15); // it will add 15 to the 2nd index
      for(int value: v)
          cout<<value<<" ";

     cout<<endl;
     vector<int> v1 ={10,9,8,7,1,4};
     sort(v1.begin(),v1.end()); // it will sort v1 in ascending order
     for(int x : v1)
          cout<<x<<" ";
     cout<<endl;

     //if we want to sort it in descending order then simply do one change in sort
     sort(v1.rbegin(),v1.rend()); // rbegin means reverse of begin
     for(int x : v1)
          cout<<x<<" ";
     cout<<endl;





}
