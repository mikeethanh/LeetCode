#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.second > b.second;
} 

int main() {
	int n, k; 
	cin >> n >> k; 
	map<int, int> mp;
	vector<pair<int,int>> v;
	for (int i = 0; i < n; i++) {
		int x; cin >> x; 
		mp[x]++;
	}
	for (auto& x : mp) {
		v.push_back(x);
	}
	sort(v.begin(), v.end(),cmp);
	for (int i = 0; i < k; i++) {
		cout << v[i].first << " ";
	}
}