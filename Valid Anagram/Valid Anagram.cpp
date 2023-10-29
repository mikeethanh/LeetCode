#include<iostream>
using namespace std;

bool check(string s, string t,int a[30],int b[30]) {
	for (int i = 0; i < s.size(); i++) {
		if (a[i] != b[i]) {
			return false;
		}
	}
	return true;
}

int main() {
	string s, t;
	cin >> s >> t;
	int a[30];
	int b[30];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	for (char x : s) {
		a[x-'a']++;
	}
	for (char x : t) {
		b[x-'a']++;
	}
}