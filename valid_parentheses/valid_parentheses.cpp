#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;

bool solve(string s) {
    unordered_map<char, char> um = { {')', '('}, {']', '['}, {'}', '{'} };
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        }
        else {
            if (st.empty() || st.top() != um[c]) {
                return false;
            }
            else {
                st.pop();
            }
        }
    }

    if (!st.empty()) {
        return false;
    }

    return true;
}

int main() {
    string s;
    cin >> s;
    if (solve(s) == true) {
        cout << "valid" << endl;
    }
    else {
        cout << "invalid" << endl;
    }
    return 0;
}
