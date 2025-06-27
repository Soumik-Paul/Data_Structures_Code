#include<bits/stdc++.h>
using namespace std;
main()
{
     vector<int> v = {10,15,20,25,30};
     cout<<v[0]<<endl;
     cout<<v[1]<<endl;
     cout<<v[2]<<endl;
     cout<<v.size()<<endl;

     //second way
     vector<int> v2;
     v2.push_back(10);
     v2.push_back(12);
     v2.push_back(14);

     for(int i=0;i<v2.size();i++)
          cout<<v2[i]<<" ";

     cout<<endl;


     vector<char> v3 = {'a', 'b' , 'c', 'x' ,'y'};

     v3.push_back('z');
     for(char value : v3)
          cout<<value<<" ";

     cout<<endl;

     vector<int> v4 = {1,2,3};
     for(int value : v4)
               cout<<value<<endl;













}
