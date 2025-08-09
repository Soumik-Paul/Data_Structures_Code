#include<bits/stdc++.h>
using namespace std;
bool isBalance(string s)
{
     cout<<s<<endl;
     stack<char> st;
     for(char ch: s)
     {
          if(ch=='(' || ch == '{' || ch =='[')
               st.push(ch);
          else
          {
               if(st.size()==0) // stack is empty
               return false;
               char top = st.top();
               if(ch==')' && top != '(') return false;
               if(ch=='}' && top!='{') return false;

               if(ch==']' && top != '[') return false;
               st.pop();
           }

     }
     return true;
}
main()
{
     string s= "({})" ;
     cout<<isBalance(s)<<endl;
     cout<<isBalance("[][]({})")<<endl;
     cout<<isBalance("]()")<<endl;


}
