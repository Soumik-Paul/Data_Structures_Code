// We will find which character appears how many times in a string

#include<bits/stdc++.h>
using namespace std;
main()
{
     string s;
     cin>> s ;
     map<char , int > m;
     for(char ch: s)
     {
          m[ch]++;
     }
     // try this one
     /*for(char ch: s)
          cout<<ch<<" "<<m[ch]<<endl;
     */
     // also you can apply this
     for(auto pair : m)
               cout<<pair.first<<" "<<pair.second<<endl;
}
