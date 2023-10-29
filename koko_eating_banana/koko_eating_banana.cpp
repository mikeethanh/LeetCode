#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(vector<int> s, int h) {
	int l = 1; 
	int r = *max_element(s.begin(), s.end());

	while (l < r) {
		int m = (l + r) / 2;
		int hoursneed = 0;
		for (int pile : s) {
			hoursneed += (pile + m - 1) / m;
		}
		if (hoursneed <= h) {
			r = m;
		}
		else {
			l = m; 
		}
	}
	return l; 
}

int main() {
	vector<int> piles = { 3,6,7,11 };
	int h = 8; 
	cout << l;
}