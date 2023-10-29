#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> solve(vector<int> tem,int n) {
	vector<int> answer(n, 0);
	stack<int> st;
	for (int i = 0; i < n; i++) {
		while (!st.empty() && tem[i] > tem[st.top()]) {
			int previous_day = st.top();
			answer[previous_day] = i - previous_day;
		}
		st.push(i);
	}

	if (!st.empty()) {
		int a = st.size();
		for (int i = n - st.size(); i < n; i++) {
			answer[i] = 0;
		}
	}
	return answer;
}

int main() {
	int n; cin >> n;
	vector<int> tem(n);
	for (int i = 0; i < n; i++) {
		cin >> tem[i];
	}

	vector<int> ans = solve(tem, n);
	for (int s : ans) {
		cout << s << " ";
	}
}
