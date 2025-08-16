#include<bits/stdc++.h>
using namespace std;

// Return precedence of an operator: higher value = higher precedence
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;   // for '(' or anything else
}

// Is this character one of our operators?
bool isOperator(char c) {
    return c=='+' || c=='-' || c=='*' || c=='/';
}


string infixToPostfix(const string& s) {
    stack<char> st;
    string out;       // result

    for (char c : s) {
        if (c == ' ') continue;                 // skip spaces

        if (isalnum(c)) {            // variable -> output
            out += c;
        } else if (c == '(') {                  // '(' -> stack
            st.push(c);
        } else if (c == ')') {                 // pop until '('
            while (!st.empty() && st.top() != '(') {
                out += st.top(); st.pop();
            }
             st.pop();          // remove '('
        } else if (isOperator(c)) {             // operator
            // While stack top has an operator with >= precedence,
            // pop it to output. (Left-associative: + - * /)
            while (!st.empty() && st.top() != '(' &&
                   precedence(st.top()) >= precedence(c)) {
                out += st.top(); st.pop();
            }
            st.push(c);                         // push current operator
        }
        // Any other character is ignored
    }

    // Pop any remaining operators
    while (!st.empty()) {
        out += st.top(); st.pop();
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

