#include <bits/stdc++.h>
using namespace std;

bool isBalance(string s)
{
    cout << s << endl;
    stack<char> st;
    for (char ch : s)
    {
        if (ch == '(' || ch == '{' || ch == '[')
            st.push(ch);
        else if (ch == ')' || ch == '}' || ch == ']') // only handle closers
        {
            if (st.empty()) return false; // stack is empty
            char top = st.top();
            if (ch == ')' && top != '(') return false;
            if (ch == '}' && top != '{') return false;
            if (ch == ']' && top != '[') return false;
            st.pop();
        }

    }
    return st.empty(); // যদি stack এ কিছু থেকে থাকে তাইলে False return করবে
}

int main()
{
    cout << boolalpha;
    /*
    The manipulator boolalpha tells cout to instead print them as the words:
               true
               false
*/
    string s = "({})";
    cout << isBalance(s) << endl;           // true
    cout << isBalance("[][]({})") << endl;  // true
    cout << isBalance("]()") << endl;       // false
    cout << isBalance("(()") << endl; //false
    return 0;
}
