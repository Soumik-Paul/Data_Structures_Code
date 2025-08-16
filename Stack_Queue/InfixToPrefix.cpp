#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

bool isOperator(char c) {
    return c=='+' || c=='-' || c=='*' || c=='/';
}

string infixToPostfix(const string& s) {
    stack<char> st;
    string out;
    for (char c : s) {
        if (c == ' ') continue;                 // ignore spaces
        if (isalnum(static_cast<unsigned char>(c))) {
            out += c;                           // operand -> output
        } else if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                out += st.top(); st.pop();
            }
            st.pop();          // pop '('
        } else if (isOperator(c)) {
            while (!st.empty() && st.top() != '(' &&
                   precedence(st.top()) > precedence(c)) {
                out += st.top(); st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) { out += st.top(); st.pop(); }
    return out;
}

// Infix -> Prefix: reverse (swap brackets) -> postfix -> reverse
string infixToPrefix(const string& s) {
    // 1) Reverse and swap '(' to ')'
    string rev;
    rev.reserve(s.size());
    for (int i = (int)s.size() - 1; i >= 0; --i) {
        char c = s[i];
        if (c == '(') rev += ')';
        else if (c == ')') rev += '(';
        else rev += c;
    }

    // 2) Convert reversed infix to postfix
    string post = infixToPostfix(rev);

    // 3) Reverse postfix to get prefix
    reverse(post.begin(), post.end());
    return post;
}

int main() {
    string s = "a + b * (c-d) + e";
    cout << "Infix  : " << s << "\n";
    cout << "Prefix : " << infixToPrefix(s) << endl; // + + a * b - c d e
    return 0;
}

