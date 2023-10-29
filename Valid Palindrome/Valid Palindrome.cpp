#include<iostream>
#include<string>
#include<sstream>
using namespace std;

bool check(string s) {
	int l = 0;
	int r = s.size() - 1;
	while (l < r) {
		if (s[l] == s[r]) {
			l++; r--;
		}
		else {
			return false;
		}
	}
	return true;
}

int main() {
	string s; 
	//doc vao ca dong
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
		if (s[i] == ',' || s[i] == ':') {
			s.erase(i, 1);
		}
	}

	stringstream ss(s);
	string tmp;
	string s2;
	while (ss >> tmp) { 
		s2 += tmp;
	}
	cout << s2 << endl;
	if (check(s2)) cout << "true";
	else cout << "false";
}