#include<bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;   // for '(' or anything else
}

string infixToPostfix(string s) {
    stack<char> st;
    string out;       // result

    for (char c : s) {
        if (c == ' ') continue;                 // skip spaces

        if (isalnum(c)) {            // variable -> output
            out += c;
        } else if (c == '(') {                  // '(' -> stack
            st.push(c);
        } else if (c == ')') {                 // pop until '('
            while (st.top() != '(') {
                out += st.top();
                st.pop();
            }
             st.pop();          // remove '('
        }
        else {             // operator
            while (!st.empty() && st.top() != '(' && precedence(st.top()) >= precedence(c)) {
                out += st.top();
                st.pop();
            }
            st.push(c);                         // push current operator
        }
    }

    while (!st.empty()) {
        out += st.top();
        st.pop();
    }
    return out;
}

int main() {
    string s = "a + b * (c-d) + e";
    cout << infixToPostfix(s) << endl;



    string s2 = "(x + y) * ((A - b) / C)";
    cout << infixToPostfix(s2) << endl;
    return 0;
}

