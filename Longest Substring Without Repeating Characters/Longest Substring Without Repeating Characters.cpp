#include<iostream>
#include<unordered_set>
using namespace std;

int solve(string s) {
	int l = 0; 
	int r = 0; 
	unordered_set<char> se;
	int res = 0;
	while (l < s.size()) {
		if (se.find(s[l]) == se.end()) {
			se.insert(s[l]);
			res = max(res, l - r + 1);
			l++;
		}
		else {
			se.erase(s[r]);
			r++;
		}
	}
	return res;
}

int main() {
	string s; 
	cin >> s;
	cout << solve(s);
}