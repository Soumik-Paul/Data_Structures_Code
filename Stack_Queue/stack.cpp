#include<bits/stdc++.h>
using namespace std;

main()
{
     stack<int> st;
     st.push(10);
     st.push(20);
     st.push(30);
     cout<<st.top()<<endl;
     cout<<st.size()<<endl;
     st.pop();
     cout<<st.top()<<endl;
     cout<<st.size()<<endl;
     stack<char>st2;
     st2.push('A');
     st2.push('B');
     st2.push('C');
     st2.push('E');
     cout<<st2.top()<<endl;
     cout<<st2.size()<<endl;
     st2.pop();
     cout<<st2.top()<<endl;
     cout<<st2.size()<<endl;

     stack<char> st3;
     string name = "Data Structures";
     for(char ch: name)
          st3.push(ch);
     cout<<st3.top()<<endl;
     cout<<st3.size()<<endl;







}
