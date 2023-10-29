#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int main() {
	int n; cin >> n; 
	vector<string> v;
	vector<string> res;
	set<string> se;
	for (int i = 0; i < n; i++) {
		string s; 
		cin >> s; 
		v.push_back(s);
	}
	for (int i = 0; i < n; i++) {
		string s = v[i];
		sort(s.begin(),s.end());
		res.push_back(s);
	}

	for (int i = 0; i < n; i++) {
		if (se.find(res[i]) == se.end()) {
			cout << v[i]<< " ";
		}
		for (int j = i + 1; j < n; j++) {
			if (res[i] == res[j]) {
				cout << v[j]<< " ";
				se.insert(res[j]);
			}
		}
	}
}