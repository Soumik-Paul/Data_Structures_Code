#include<bits/stdc++.h>
using namespace std;
main()
{
     // one way to initialize vector
     int i;
     vector<int> v;
     v.push_back(10);
     v.push_back(20);
     v.push_back(30);

     for(int value : v) //for each loop
          cout<<value<<" ";

     cout<<endl;

     // you can initialize vector directly too
     vector<char> c= {'a','b','c','d'};
     for(char value: c)
               cout<<value<<" ";
     cout<<endl;

     vector<int> v2(5,1);

     v2.push_back(2);

     for(int value : v2)
          cout<<value <<" ";

     cout<<endl;
     cout<<v2.size()<<endl;

     // size of an array
     /*int a[]={10,20,30};
     int n=sizeof(a)/sizeof(int);
     cout<<n;*/
}



