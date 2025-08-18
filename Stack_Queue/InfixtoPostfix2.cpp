#include<bits/stdc++.h>
using namespace std;

int precedence(char op)
{
     if(op == '+' || op == '-') return 1;
      if(op == '*' || op == '/') return 2;
      if(op=='^') return 3;
      return 0;
}

bool isOperator(char c)
{
     if (c== '+' || c == '-' || c=='*' || c == '/')
          return true;
     else
          return false;
}

string InfixToPostFix(string s)
{
     string ans ;
     stack<char> st;
     for(char c : s)
     {
          if(isalnum(c))
               ans = ans + c;
          else{
               //1. ( পাইলাম কি না
                     if(c== '(')
                         st.push(c);
                     else if (c == ')')
                     {
                          while(st.top() != '(')
                          {
                               ans = ans + st.top();
                               st.pop();
                          }
                          st.pop(); // remove (

                     }
                     else if( isOperator(c))
                     {
                          while(!st.empty() && st.top() != '(' && precedence(st.top()) >= precedence(c) )
                          {
                               // senior or batchmate chole asche at top
                                ans = ans + st.top();
                                st.pop();
                          }
                          // senior or batchmate na
                          st.push(c);
                     }

          }

     }
     while(st.size()!=0)
     {
          ans = ans + st.top();
          st.pop();
     }


     return ans;
}

main()
{
     string s2;
     cout<<"S 2 is "<<s2<<endl;
     string s = "a+b*c-d/e";
     cout<<InfixToPostFix(s)<<endl;

     string s1 = "a + b * (c-d) + e";
     cout<<InfixToPostFix(s1)<<endl;

}

