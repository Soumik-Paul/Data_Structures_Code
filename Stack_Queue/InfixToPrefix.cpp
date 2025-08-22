#include<bits/stdc++.h>
using namespace std;

int preference (char op)
{
     if(op == '+' || op == '-') return 1;
     if(op == '*' || op=='/') return 2;
     return 0;
}

string InfixToPostfix(string s){
     string ans;
     stack<char> st;
     for (char ch:s )
     {
          if(ch== ' ') continue;
          if(isalnum(ch))
               ans = ans + ch;
          else
          {
               //1 . Deal with (
               if(ch=='(')
                    st.push(ch);
               else if(ch==')')
               {
                    while(st.top() != '(')
                    {
                         ans = ans + st.top();
                         st.pop();
                    }
                    st.pop(); // to pop the (
               }
               else
               {
                    while(!st.empty() && st.top() !='(' && preference(st.top()) > preference(ch))
                    {
                          ans = ans + st.top();
                         st.pop();
                    }
                    st.push(ch);

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

string InfixToPrefix(string s)
{
     //1 reverse
     string rev=s;
     reverse(rev.begin(),rev.end());
     for(int i =0;i <s.size();i++)
     {
          char ch = rev[i];
          if(ch == '(')
               rev[i]=')';
          else if (ch==')')
               rev[i]= '(';
     }

     string ans = InfixToPostfix(rev);
     reverse(ans.begin(),ans.end());
     return ans;
}

main()
{
     string s= "a+ b * (c-d + e) -f";
     cout<<InfixToPrefix(s)<<endl;

}
