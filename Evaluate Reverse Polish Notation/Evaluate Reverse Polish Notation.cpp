#include<iostream>
#include<string>
#include<vector>
#include<stack> 
using namespace std;


int solve(vector<string> v, int n) {
	stack<int> st;
	int res = 0;
	for (string s : v) {
		// kiem tra co phan si nguyen or so nguyen am
		if (isdigit(s[0]) || s.size() > 1 && s[0] == '-' && isdigit(s[1])) {
			st.push(stoi(s));
		}
		else {
			int a = st.top(); 
			st.pop();
			int b = st.top();
			st.pop();
			if(s == "+") { 
				st.push(a + b);
			}
			else if (s == "-") {
				st.push(a - b);
			}
			else if (s == "*") {
				st.push(a * b);
			}
			else if (s == "/") {
				if (a > b) {
					st.push(b / a);
				}
				else {
					st.push(a / b);
				}
			}
		}
	}
	return st.top();
}

int main() {
	int n; cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int res = solve(v, n);
	cout << res << endl;
}