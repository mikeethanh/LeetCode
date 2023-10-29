#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
	int n, s; cin >> n >> s;
	int a[100];
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]] = i;
	}

	for (int i = 0; i < n; i++) {
		int x = s - a[i];
		if (mp.find(x) != mp.end()) {
			cout << i << " "<< mp[x];
			break;
		}
	}

	
}
