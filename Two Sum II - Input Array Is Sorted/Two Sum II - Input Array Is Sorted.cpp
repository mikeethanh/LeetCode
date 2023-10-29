#include<iostream>
using namespace std;

void solve(int a[], int n,int s) {
	int l = 1; 
	int r = n;
	while (l < r) {
		if (a[l] + a[r] == s) {
			cout << l << " " << r;
			break;
		}
		else if (a[l] + a[r] > s) {
			r--;
		}
		else {
			l++;
		}
	}
}

int main() {
	int n,s; cin >> n>>s;
	int a[100];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	solve(a, n, s);
}